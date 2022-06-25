import {
  Button,
  Dialog,
  DialogActions,
  DialogContent,
  DialogTitle,
  FormControl, FormHelperText,
  InputLabel,
  OutlinedInput
} from '@mui/material';
import { useRecoilState } from 'recoil';
import { NewDialogOpen } from '@atoms/analyse/new/new_dialog';
import React, { useCallback, useMemo, useState } from 'react';
import { Send } from '@mui/icons-material';
import { useNewFetch } from '@atoms/analyse/new/new_fetch';
import { LoadingButton } from '@mui/lab';

export default function AnalyseNewDialog() {
  const [open, setOpen] = useRecoilState(NewDialogOpen);

  // input
  const [title, setTitle] = useState('');
  const [desc, setDesc] = useState('');

  const close = useCallback(() => setOpen(false), [setOpen]);

  const {onConfirm, loading} = useNewFetch(title, desc, close);

  const formControls: {
    tag: string,
    value: string,
    setValue: (s: string) => void,
    required?: boolean,
    error: boolean,
    errorTips: string,
    multiline?: number,
  }[] = useMemo(() => ([
    {
      tag: '标题', value: title, setValue: setTitle, required: true,
      error: title.length >= 40 || title.length === 0, errorTips: '（必填）长度不超过40'
    },
    {
      tag: '描述', value: desc, setValue: setDesc, multiline: 3,
      error: desc.length >= 100, errorTips: '长度不超过100'
    }
  ]), [title, desc]);

  const disabled = formControls.findIndex(item => item.error) !== -1

  return (
    <Dialog fullWidth open={open} onBackdropClick={close}>
      <DialogTitle>创建分析</DialogTitle>
      <DialogContent>
        {formControls.map((form, index) => (
          <FormControl key={index} margin={'dense'} fullWidth required={form.required} error={form.error}>
            <InputLabel>{form.tag}</InputLabel>
            <OutlinedInput
              label={form.tag} multiline={form.multiline !== undefined} minRows={form.multiline}
              value={form.value} onChange={e => form.setValue(e.target.value)}
            />
            {form.error && <FormHelperText>{form.errorTips}</FormHelperText>}
          </FormControl>
        ))}
      </DialogContent>
      <DialogActions>
        <Button variant='text' onClick={close}>取消</Button>
        <LoadingButton
          variant='contained' color='primary'
          onClick={onConfirm} disabled={disabled} loading={loading}
        >确认</LoadingButton>
      </DialogActions>
    </Dialog>
  )
}