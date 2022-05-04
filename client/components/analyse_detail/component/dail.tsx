import { useRecoilValue, useSetRecoilState } from 'recoil';
import { AddByCodeState } from '@atoms/analyse/detail/code/add_by_code';
import { AppendIdDialogOpen } from '@atoms/analyse/new/dataSource/appendId';
import React, { ReactNode } from 'react';
import { Code, FolderZip, Grid3x3 } from '@mui/icons-material';
import { SpeedDial, SpeedDialAction, SpeedDialIcon } from '@mui/material';
import { AnalyseDetailState } from '@atoms/analyse/detail/analyse_detail';
import { AddCodeZipState } from '@atoms/analyse/detail/code/add_code_zip';

/**
 * 快捷拨号菜单
 */
export default function DetailDail() {
  const setCodeDialogOpen = useSetRecoilState(AddByCodeState);
  const setCodeZipDialog = useSetRecoilState(AddCodeZipState);
  const setIdDialogOpen = useSetRecoilState(AppendIdDialogOpen);
  const detail = useRecoilValue(AnalyseDetailState);

  const actions: {
    title: string,
    icon: ReactNode,
    onClick: () => void,
  }[] = [
    {
      title: '输入提交代码', icon: <Code/>, onClick: () =>
        setCodeDialogOpen({
          open: true,
          analyseId: detail.analyse_id
        })
    },
    {
      title: '上传代码压缩包', icon: <FolderZip/>, onClick: () =>
        setCodeZipDialog({
          open: true,
          analyseId: detail.analyse_id
        })
    },
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
