import React, { ReactNode, useCallback, useState } from 'react';
import { DataGrid, GridColDef } from '@mui/x-data-grid';
import {
  SpeedDial,
  SpeedDialAction,
  SpeedDialIcon, Typography
} from '@mui/material';
import { Code, Grid3x3 } from '@mui/icons-material';
import AppendIdDialog from '@components/AnalyseCreate/Step2/dialogs/appendIdDialog';
import { useSetRecoilState } from 'recoil';
import { AppendIdDialogOpen } from '@atoms/analyse/create/dataSource/appendId';
import { AppendCodeDialogOpen } from '@atoms/analyse/create/dataSource/appendCode';
import AppendCodeDialog from '@components/AnalyseCreate/Step2/dialogs/appendCodeDialog';

export default function SourceCustom() {
  return (
    <>
      <DataGrid columns={columns} rows={[]} hideFooter components={{NoRowsOverlay: NoRows}}/>
      <AddDataSource/>
      <AppendIdDialog/>
      <AppendCodeDialog/>
    </>
  );
}

/**
 * 快捷拨号菜单
 */
const AddDataSource = () => {
  const setCodeDialogOpen = useSetRecoilState(AppendCodeDialogOpen);
  const setIdDialogOpen = useSetRecoilState(AppendIdDialogOpen);

  const actions: {
    title: string,
    icon: ReactNode,
    onClick: () => void,
  }[] = [
    {title: '输入提交代码', icon: <Code/>, onClick: () => setCodeDialogOpen(true)},
    {title: '输入提交ID', icon: <Grid3x3/>, onClick: () => setIdDialogOpen(true)},
  ]

  return (
    <SpeedDial
      ariaLabel='source-custom-add' icon={<SpeedDialIcon/>}
      sx={{position: 'absolute', bottom: 16, right: 16}}
    >
      {actions.map((action, index) => (
        <SpeedDialAction
          key={index} icon={action.icon}
          onClick={action.onClick}
          tooltipOpen tooltipTitle={action.title}
        />
      ))}
    </SpeedDial>
  )
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