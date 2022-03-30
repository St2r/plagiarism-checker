import React from 'react';
import { DataGrid } from '@mui/x-data-grid';
import { columnDef } from './columnDef';
import { GridRowsProp } from '@mui/x-data-grid/models/gridRows';

const rows: GridRowsProp = [
  {id: 1, name: 'test'}
]

export default function AllAnalysisTable() {
  return (
    <DataGrid columns={columnDef} rows={rows} hideFooter/>
  )
}