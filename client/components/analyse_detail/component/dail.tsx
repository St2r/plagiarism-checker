import { useSetRecoilState } from 'recoil';
import { AppendCodeDialogOpen } from '@atoms/analyse/new/dataSource/appendCode';
import { AppendIdDialogOpen } from '@atoms/analyse/new/dataSource/appendId';
import React, { ReactNode } from 'react';
import { Code, Grid3x3 } from '@mui/icons-material';
import { SpeedDial, SpeedDialAction, SpeedDialIcon } from '@mui/material';

/**
 * 快捷拨号菜单
 */
export default function DetailDail() {
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
