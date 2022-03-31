import { useRecoilState } from 'recoil';
import { MessageState } from '@atoms/layout/message';
import { Alert, Snackbar } from '@mui/material';

export default function MessageAlert() {
  const [message, setMessage] = useRecoilState(MessageState);
  const handleClose = () => setMessage(raw => ({...raw, open: false}))
  return (
    <Snackbar
      open={message.open} autoHideDuration={2000} onClose={handleClose}
      anchorOrigin={{vertical: 'top', horizontal: 'right'}}
    >
      <Alert
        onClose={handleClose} severity={message.type} sx={{width: '100%'}}
      >
        {message.message}
      </Alert>
    </Snackbar>
  )
}