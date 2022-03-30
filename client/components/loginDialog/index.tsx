import React from 'react';
import { Button, Dialog, DialogActions, DialogContent, DialogContentText, DialogTitle } from '@mui/material';
import { useRecoilState } from 'recoil';
import { LoginDialogStatus } from '@atoms/user/loginDialog';

export default function LoginDialog() {
  const [loginDialog, setLoginDialog] = useRecoilState(LoginDialogStatus);

  const handleClose = () => setLoginDialog({open: false})

  return (
    <Dialog open={loginDialog.open} fullWidth>
      <DialogTitle>请先登陆</DialogTitle>
      <DialogContent>
        <DialogContentText>
          登陆后使用完整功能
        </DialogContentText>
      </DialogContent>
      <DialogActions>
        <Button onClick={handleClose}>我知道了</Button>
      </DialogActions>
    </Dialog>
  )
}