import React, { ReactNode, useCallback, useState } from 'react';
import { DataGrid, GridColDef } from '@mui/x-data-grid';
import {
  SpeedDial,
  SpeedDialAction,
  SpeedDialIcon, Typography
} from '@mui/material';
import { Code, Grid3x3 } from '@mui/icons-material';
import { useSetRecoilState } from 'recoil';
import { AppendIdDialogOpen } from '@atoms/analyse/new/dataSource/appendId';
import { AddByCodeState } from '@atoms/analyse/detail/code/add_by_code';

export default function SourceCustom() {
  return (
    <>
      <DataGrid columns={columns} rows={[]} hideFooter components={{NoRowsOverlay: NoRows}}/>
    </>
  );
}

const DefaultColumnDes: GridColDef = {
  field: 'undefined',
  flex: 1,
  align: 'center',
  headerAlign: 'center',
  disableColumnMenu: true,
}

const columns: GridColDef[] = [
  {...DefaultColumnDes, field: 'category', headerName: '类别', flex: 1},
  {...DefaultColumnDes, field: 'description', headerName: '描述', flex: 1},
  {...DefaultColumnDes, field: 'time', headerName: '时间', flex: 1},
]

/**
 * 空状态
 */
const NoRows = () => {
  return (
    <Typography sx={{
      display: 'flex', justifyContent: 'center', alignItems: 'center', height: '100%'
    }}>没有内容</Typography>
  )
}