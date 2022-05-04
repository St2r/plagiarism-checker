import { Button, Stack } from '@mui/material';
import { Refresh } from '@mui/icons-material';

export default function Toolbar() {
  return (
    <Stack direction={'row'} sx={{px: 2, py: 1}} spacing={2}>
      <Button variant={'outlined'} startIcon={<Refresh/>}>刷新</Button>
    </Stack>
  )
}