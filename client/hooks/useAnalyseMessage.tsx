import { useCallback } from 'react';
import { useSnackbar } from 'notistack';
import { IconButton, Link, Typography } from '@mui/material';
import { Close } from '@mui/icons-material';
import { useRouter } from 'next/router';


export default function useAnalyseMessage() {
  const {enqueueSnackbar, closeSnackbar} = useSnackbar()
  const router = useRouter();

  return useCallback((analyseId: string, analyseName: string) => {
    // 唯一 key
    const key = new Date().getTime()
    enqueueSnackbar((
      <Typography>
        查重分析<Link onClick={() => router.push(`/analyse/${analyseId}`)}>{analyseName}</Link>运行完毕
      </Typography>
    ), {
      key,
      action: (<IconButton onClick={() => closeSnackbar(key)}><Close/></IconButton>),
      variant: 'success',
      autoHideDuration: null,
    })

  }, [enqueueSnackbar, router, closeSnackbar])
}
