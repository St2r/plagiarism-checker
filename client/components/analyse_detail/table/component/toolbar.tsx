import { Button, Stack } from '@mui/material';
import { PlayArrow, Search } from '@mui/icons-material';

export default function Toolbar() {
  return (
    <Stack sx={{my: 1, mx: 2}} direction='row' spacing={2}>
      <Button startIcon={<PlayArrow/>} variant={'outlined'}>运行</Button>
      <Button startIcon={<Search/>} variant={'outlined'}>查看分析报告</Button>
    </Stack>
  )
}