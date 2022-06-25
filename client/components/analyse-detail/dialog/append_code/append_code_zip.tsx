import { Button, Dialog, DialogActions, DialogContent, DialogTitle, Typography } from '@mui/material';
import { useRecoilState, useSetRecoilState } from 'recoil';
import { AddCodeZipState } from '@atoms/analyse/detail/code/add_code_zip';
import get from 'lodash/get';
import { ChangeEvent, useCallback, useState } from 'react';
import axios from 'axios';
import { AnalyseDetailState } from '@atoms/analyse/detail/analyse-detail';
import useShowMessage from '@hooks/useMessage';
import { LoadingButton } from '@mui/lab';

export default function AppendCodeZipDialog() {
  const [loading, setLoading] = useState(false)
  const [state, setState] = useRecoilState(AddCodeZipState)
  const setDetailState = useSetRecoilState(AnalyseDetailState)
  const showMessage = useShowMessage()

  const close = () => setState(raw => ({...raw, open: false}))

  const submitFile = useCallback(async (e: ChangeEvent<HTMLInputElement>) => {
    const file: File = get(e, 'target.files[0]');
    if (!file) {
      return;
    }

    const formData = new FormData();
    formData.append('zip', file);
    formData.append('analyseId', state.analyseId);
    setLoading(true);
    await axios.post('/code/add/zip', formData)
      .then(res => {
        setDetailState(raw => ({...raw, codes: [...raw.codes, ...res.data.data]}))
        const length = res.data.data.length;
        if (length) {
          showMessage('success', `成功添加 ${length} 条代码`)
        }
      })
      .catch(() => {
        showMessage('error', '添加代码失败')
      })
      .finally(() => {
        setState(raw => ({...raw, open: false}))
        setLoading(false)
      })

  }, [setDetailState, setState, showMessage, state]);

  return (
    <Dialog open={state.open} fullWidth onBackdropClick={close}>
      <DialogTitle>上传代码压缩包</DialogTitle>
      <DialogContent>
        <Typography>点击上传按钮上传包含待查重代码文件压缩包</Typography>
      </DialogContent>
      <DialogActions>
        <Button color='secondary' onClick={close}>取消</Button>
        <label>
          <input accept="application/zip" type="file" style={{display: 'none'}}
                 onChange={submitFile}/>
          <LoadingButton loading={loading} variant="outlined" component="span">
            上传
          </LoadingButton>
        </label>
      </DialogActions>
    </Dialog>
  )
}