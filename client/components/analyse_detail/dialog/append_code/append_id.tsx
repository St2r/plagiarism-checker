import {
  Button,
  Dialog, DialogActions,
  DialogContent,
  DialogContentText,
  DialogTitle,
  TextField
} from '@mui/material';
import React, { useCallback, useState } from 'react';
import { useRecoilState } from 'recoil';
import { AppendIdDialogOpen } from '@atoms/analyse/new/dataSource/appendId';

export default function AppendIdDialog() {
  const [input, setInput] = useState('');

  const [open, setOpen] = useRecoilState(AppendIdDialogOpen);

  const onClickCancel = useCallback(() => {
    setOpen(false);
  }, [setOpen]);

  const onClickConfirm = useCallback(() => {
    setOpen(false);
  }, [setOpen]);

  return (
    <Dialog open={open} fullWidth>
      <DialogContent>
        功能建设中
      </DialogContent>
      <DialogActions>
        <Button onClick={onClickCancel}>了解</Button>
      </DialogActions>
    </Dialog>
  )

  return (
    <Dialog open={open}>
      <DialogTitle>输入提交 ID</DialogTitle>
      <DialogContent>
        <DialogContentText>
          输入一个 OJ 系统中的提交 ID，系统会将其添加到分析数据源中。
        </DialogContentText>
        <TextField
          autoFocus fullWidth variant="standard"
          margin="dense" label="ID" type="text"
          value={input} onChange={e => setInput(e.target.value)}
        />
      </DialogContent>
      <DialogActions>
        <Button color="secondary" onClick={onClickCancel}>取消</Button>
        <Button disabled={input.length === 0} variant='outlined' onClick={onClickConfirm}>提交</Button>
      </DialogActions>
    </Dialog>
  )
}