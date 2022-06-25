import { Button, Stack, TextField } from '@mui/material';
import { PlayArrow, Refresh, Search } from '@mui/icons-material';
import { useRecoilState, useSetRecoilState } from 'recoil';
import { AnalyseDetailLoadingState, AnalyseDetailState } from '@atoms/analyse/detail/analyse-detail';
import { LoadingButton } from '@mui/lab';
import { ChangeEvent, useCallback } from 'react';
import axios from 'axios';
import useShowMessage from '@hooks/useMessage';
import { AnalyseReportState } from '@atoms/analyse/detail/report';
import AddCodeButtonGroup from '@components/analyse-detail/table/toolbar/add_code';
import { AnalyseDetailCodeFilter } from '@atoms/analyse/detail/analyse-detail-code-filter';
import { useJump } from '@hooks/useJump';

export default function Toolbar() {
  const [detail, setDetail] = useRecoilState(AnalyseDetailState);
  const setReportData = useSetRecoilState(AnalyseReportState);
  const showMessage = useShowMessage();
  const setAnalyseCodeFilter = useSetRecoilState(AnalyseDetailCodeFilter);
  const [loading, setLoading] = useRecoilState(AnalyseDetailLoadingState);
  const jump = useJump();

  const onClickRefresh = useCallback(async () => {
    setLoading(true);
    await axios.get(`/analyse/detail/${detail.analyse_id}`)
      .then(res => setDetail(res.data.data))
      .catch(err => {
        showMessage('error', '刷新失败')
      })
      .finally(() => setLoading(false))
  }, [detail.analyse_id, setDetail, setLoading, showMessage]);

  const onClickRun = useCallback(async () => {
    setDetail(raw => ({...raw, status: 'running'}));
    await axios.post('/analyse/run', {
      analyse_id: detail.analyse_id,
    }).then(res => {
    }).catch(err => {
    })
  }, [detail, setDetail])

  const onClickReport = useCallback(() => {
    jump(`/analyse/${detail.analyse_id}/result`);
  }, [detail.analyse_id, jump]);

  const onUpdateNameFilter = useCallback((event: ChangeEvent<HTMLInputElement>) => {
    setAnalyseCodeFilter({
      code_name: event.target.value || ''
    });
  }, [setAnalyseCodeFilter]);

  return (
    <Stack sx={{my: 1, mx: 2}} direction='row' spacing={2}>
      {/*刷新*/}
      <LoadingButton
        loading={loading} loadingPosition={'start'} startIcon={<Refresh/>}
        variant={'outlined'} onClick={onClickRefresh}
      >刷新</LoadingButton>
      {/*添加代码*/}
      <AddCodeButtonGroup/>
      {/*运行按钮 && 运行中*/}
      {(detail.status === 'not_start' || detail.status === 'running' || detail.status === 'finished') && (
        <LoadingButton
          loading={detail.status === 'running'} loadingPosition={'start'}
          onClick={onClickRun}
          startIcon={<PlayArrow/>} variant={'outlined'}>
          {detail.status === 'not_start' && '运行查重'}
          {detail.status === 'running' && '运行中'}
          {detail.status === 'finished' && '重新运行'}
        </LoadingButton>
      )}
      {/*查看报告*/}
      {detail.status === 'finished' && (
        <Button startIcon={<Search/>} variant={'outlined'} color={'success'}
                onClick={onClickReport}>查看分析报告</Button>
      )}
      {/*过滤*/}
      <TextField
        variant="outlined" size={'small'} InputProps={{style: {height: 36.5}}} placeholder={'查询名称'}
        onChange={onUpdateNameFilter}/>
    </Stack>
  )
}