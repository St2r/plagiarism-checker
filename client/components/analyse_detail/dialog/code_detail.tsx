import { Button, Dialog, DialogActions, DialogContent, DialogTitle, TextField } from '@mui/material';
import { useRecoilState } from 'recoil';
import { CodeState } from '@atoms/analyse/detail/code';

export default function CodeDetail() {
  const [data, setDate] = useRecoilState(CodeState);

  const close = () => setDate({open: false});

  return (
    <Dialog open={data.open} onBackdropClick={close} fullWidth>
      <DialogTitle>
        查看代码
      </DialogTitle>
      <DialogContent>
        <TextField
          fullWidth margin='dense' label='代码'
          multiline minRows={3} maxRows={10}
          InputProps={{readOnly: true}} value={data.code_content}
        />
      </DialogContent>
      <DialogActions>
        <Button variant='outlined' onClick={close}>确认</Button>
      </DialogActions>
    </Dialog>
  )
}