import { Button, Stack } from '@mui/material';
import { Refresh } from '@mui/icons-material';
import { LoadingButton } from '@mui/lab';
import { useCallback, useState } from 'react';
import axios from 'axios';
import { useSetRecoilState } from 'recoil';
import { AllAnalyseState } from '@atoms/analyse/all/all_analyse';

export default function Toolbar() {
  const [refreshing, setRefreshing] = useState(false);
  const setAnalyseAll = useSetRecoilState(AllAnalyseState);

  const onClickRefresh = useCallback(async () => {
    setRefreshing(true)
    try {
      await axios.get('/analyse/list')
        .then(res => res.data.data).then(setAnalyseAll)
    } catch (e) {
      console.warn(e)
    } finally {
      setRefreshing(false)
    }
  }, [setAnalyseAll]);

  return (
    <Stack direction={'row'} sx={{px: 2, py: 1}} spacing={2}>
      <LoadingButton
        loading={refreshing} loadingPosition={'start'}
        onClick={onClickRefresh}
        variant={'outlined'} startIcon={<Refresh/>}
      >
        刷新
      </LoadingButton>
    </Stack>
  )
}