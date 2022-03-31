import { SpeedDial } from '@mui/material';
import { Refresh } from '@mui/icons-material';
import React from 'react';

export default function RefreshButton() {
  return (
    <SpeedDial
      sx={{position: 'absolute', right: 16, bottom: 16}}
      ariaLabel="refresh-analyse-list" icon={<Refresh fontSize='large'/>}
    />
  )
}