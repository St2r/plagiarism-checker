import React, { useCallback, useState } from 'react';
import { Button, Dialog, DialogActions, DialogContent, DialogTitle, TextField } from '@mui/material';
import { useRecoilState } from 'recoil';
import { AppendCodeDialogOpen } from '@atoms/analyse/new/dataSource/appendCode';

export default function AppendCodeDialog() {
  const [open, setOpen] = useRecoilState(AppendCodeDialogOpen);
  const [desc, setDesc] = useState('');
  const [code, setCode] = useState('');

  const onClickCancel = useCallback(() => {
    setOpen(false);
  }, [setOpen]);

  const onClickConfirm = useCallback(() => {
    setOpen(false);
  }, [setOpen]);

  return (
    <Dialog open={open} fullWidth>
      <DialogTitle>输入提交的代码内容</DialogTitle>
      <DialogContent>
        <TextField
          autoFocus fullWidth variant='outlined'
          margin='dense' label='描述' type='text'
          value={desc} onChange={e => setDesc(e.target.value)}
        />
        <TextField
          fullWidth multiline variant="outlined"
          margin="dense" label="代码" type="text" minRows={5}
          value={code} onChange={e => setCode(e.target.value)}
        />
      </DialogContent>
      <DialogActions>
        <Button color="secondary" onClick={onClickCancel}>取消</Button>
        <Button
          variant='outlined' disabled={code.length === 0 || desc.length === 0}
          onClick={onClickConfirm}>提交</Button>
      </DialogActions>
    </Dialog>
  )
}