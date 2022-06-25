import { Button, Dialog, DialogActions, DialogContent, DialogTitle, Typography } from '@mui/material';
import { useRecoilState, useSetRecoilState } from 'recoil';
import { AnalyseDeleteState } from '@atoms/analyse/all/delete';
import { useCallback, useState } from 'react';
import { AllAnalyseState } from '@atoms/analyse/all/all_analyse';
import axios from 'axios';
import useShowMessage from '@hooks/useMessage';
import { LoadingButton } from '@mui/lab';

export default function AnalyseDeleteDialog() {
  const [data, setData] = useRecoilState(AnalyseDeleteState);
  const setAllAnalyse = useSetRecoilState(AllAnalyseState);
  const [loading, setLoading] = useState(false);
  const showMessage = useShowMessage();
  const close = useCallback(() => {
    setData(raw => ({...raw, open: false}));
  }, [setData]);

  const onConfirm = useCallback(async () => {
    setLoading(true)
    await axios.post('/analyse/delete', {
      analyse_id: data.analyseId
    }).then(res => {
      setAllAnalyse(raw => raw.filter(a => a.analyse_id !== data.analyseId))
      showMessage('success', '删除成功')
      close();
    }).catch(err => {
      showMessage('error', '删除失败')
    })
    setLoading(false);
  }, [close, data.analyseId, setAllAnalyse, showMessage]);

  return (
    <Dialog open={data.open} onBackdropClick={close} fullWidth>
      <DialogTitle>确认删除</DialogTitle>
      <DialogContent>
        <Typography>您是否要删除该项分析</Typography>
        <br/>
        <Typography color={'error'} variant={'subtitle1'}>{data.analyseName}</Typography>
      </DialogContent>
      <DialogActions>
        <Button onClick={close}>取消</Button>
        <LoadingButton loading={loading} onClick={onConfirm} variant={'outlined'} color={'error'}>确认</LoadingButton>
      </DialogActions>
    </Dialog>
  )
}