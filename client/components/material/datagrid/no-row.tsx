import { Typography } from '@mui/material';
import React from 'react';

export default function NoRows() {
  return (
    <Typography sx={{
      display: 'flex', justifyContent: 'center', alignItems: 'center', height: '100%'
    }}>没有内容</Typography>
  )
}