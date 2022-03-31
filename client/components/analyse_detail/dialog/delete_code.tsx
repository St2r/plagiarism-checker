import { Button, Dialog, DialogActions, DialogContent, DialogContentText, DialogTitle } from '@mui/material';
import { useRecoilState, useSetRecoilState } from 'recoil';
import { DeleteCodeState } from '@atoms/analyse/detail/delete_code';
import { LoadingButton } from '@mui/lab';
import { useCallback, useState } from 'react';
import axios from 'axios';
import { useShowMessage } from '@atoms/layout/message';
import { AnalyseDetailState } from '@atoms/analyse/detail/analyse_detail';

export default function DeleteCodeDialog() {
  const [data, setData] = useRecoilState(DeleteCodeState);
  const [loading, setLoading] = useState(false);
  const setDetail = useSetRecoilState(AnalyseDetailState);
  const showMessage = useShowMessage();

  const close = () => setData(raw => ({...raw, open: false}));

  const onConfirm = useCallback(async () => {
    setLoading(true)
    axios.post('/code/delete', {
      analyse_id: data.analyseId,
      code_id: data.codeId,
    }).then(() => {
      showMessage('success', '删除成功')
      setDetail(raw => ({
        ...raw,
        codes: raw.codes.filter(c => c.code_id !== data.codeId)
      }))
      close()
    }).catch(() => {
      showMessage('error', '删除失败')
    })
    setLoading(false)
  }, [setLoading, data, showMessage, setDetail, close]);

  return (
    <Dialog open={data.open} fullWidth onBackdropClick={close}>
      <DialogTitle>删除代码</DialogTitle>
      <DialogContent>
        <DialogContentText>
          是否确定删除该段代码
        </DialogContentText>
      </DialogContent>
      <DialogActions>
        <Button variant={'outlined'} onClick={close}>取消</Button>
        <LoadingButton
          color={'error'} variant={'outlined'}
          loading={loading} onClick={onConfirm}
        >确定</LoadingButton>
      </DialogActions>
    </Dialog>
  )
}