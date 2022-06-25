import { Typography } from '@mui/material';
import React from 'react';

export default function NoResults() {
  return (
    <Typography sx={{
      display: 'flex', justifyContent: 'center', alignItems: 'center', height: '100%'
    }}>没有结果</Typography>
  )
}