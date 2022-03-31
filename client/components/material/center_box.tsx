import { Box, BoxProps } from '@mui/material';

export default function CenterBox(props: BoxProps) {
  return <Box
    {...props}
    sx={{
      display: 'flex', width: '100%', height: '100%', justifyContent: 'center', alignItems: 'center',
      ...props.sx
    }}
  />
}