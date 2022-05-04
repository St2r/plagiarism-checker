import { Button, Dialog, DialogActions, DialogContent, DialogTitle, Typography } from '@mui/material';
import { useRecoilState } from 'recoil';
import { AddCodeZipState } from '@atoms/analyse/detail/code/add_code_zip';

export default function AppendCodeZipDialog() {
  const [state, setState] = useRecoilState(AddCodeZipState)

  const close = () => setState(raw => ({...raw, open: false}))
  return (
    <Dialog open={state.open} fullWidth onBackdropClick={close}>
      <DialogTitle>上传代码压缩包</DialogTitle>
      <DialogContent>
        <Typography>点击上传按钮上传包含待查重代码文件压缩包</Typography>
      </DialogContent>
      <DialogActions>
        <Button color='secondary' onClick={close}>取消</Button>
        <label>
          <input accept="application/zip"  multiple type="file" style={{display: 'none'}}/>
          <Button variant="outlined" component="span">
            上传
          </Button>
        </label>
      </DialogActions>
    </Dialog>
  )
}