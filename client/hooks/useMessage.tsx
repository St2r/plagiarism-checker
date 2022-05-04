import { useCallback } from 'react';
import { useSnackbar } from 'notistack';
import { IconButton } from '@mui/material';
import { Close } from '@mui/icons-material';

type TMessageType = 'success' | 'info' | 'warning' | 'error'

export default function useShowMessage() {
  const {enqueueSnackbar, closeSnackbar} = useSnackbar()

  return useCallback((type: TMessageType, message: string) => {
    // 唯一 key
    const key = new Date().getTime()
    enqueueSnackbar(message, {
      key,
      action: (<IconButton onClick={() => closeSnackbar(key)}><Close/></IconButton>),
      variant: type,
    })

  }, [enqueueSnackbar, closeSnackbar])
}
