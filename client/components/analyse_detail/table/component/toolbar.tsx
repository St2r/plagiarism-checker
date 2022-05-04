import { Button, Stack } from '@mui/material';
import { PlayArrow, Search } from '@mui/icons-material';
import { useRecoilState, useRecoilValue, useSetRecoilState } from 'recoil';
import { AnalyseDetailState } from '@atoms/analyse/detail/analyse_detail';
import { LoadingButton } from '@mui/lab';
import { useCallback, useState } from 'react';
import axios from 'axios';
import { useShowMessage } from '@atoms/layout/message';
import { AnalyseReportState } from '@atoms/analyse/detail/report';

export default function Toolbar() {
  const [detail, setDetail] = useRecoilState(AnalyseDetailState);
  const [running, setRunning] = useState(false);
  const setReportData = useSetRecoilState(AnalyseReportState);
  const showMessage = useShowMessage();

  const onClickRun = useCallback(async () => {
    setRunning(true)
    await axios.post('/analyse/run', {
      analyse_id: detail.analyse_id,
    }).then(res => {
      setDetail(res.data.data);
      showMessage('success', '运行成功');
    }).catch(err => {
      showMessage('error', '运行失败');
    })
    setRunning(false)
    setDetail(raw => ({...raw, status: '运行完毕'}))
  }, [setRunning])

  const onClickReport = useCallback(() => {
    setReportData(raw => ({...raw, open: true}))
  }, [setReportData]);

  return (
    <Stack sx={{my: 1, mx: 2}} direction='row' spacing={2}>
      <LoadingButton
        loading={running} onClick={onClickRun}
        startIcon={<PlayArrow/>} variant={'outlined'}>{detail.status === '等待运行' ? '运行' : '重新运行'}</LoadingButton>
      {detail.status === '运行完毕' && (
        <Button startIcon={<Search/>} variant={'outlined'} onClick={onClickReport}>查看分析报告</Button>
      )}
    </Stack>
  )
}