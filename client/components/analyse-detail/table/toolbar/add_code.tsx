import { Button, ButtonGroup } from '@mui/material';
import React, { ReactNode } from 'react';
import { Code, FolderZip, Grid3x3 } from '@mui/icons-material';
import { useRecoilValue, useSetRecoilState } from 'recoil';
import { AddByCodeState } from '@atoms/analyse/detail/code/add_by_code';
import { AddCodeZipState } from '@atoms/analyse/detail/code/add_code_zip';
import { AddCodeIdState } from '@atoms/analyse/new/dataSource/appendId';
import { AnalyseDetailState } from '@atoms/analyse/detail/analyse-detail';

export default function AddCodeButtonGroup() {
  const setCodeDialogOpen = useSetRecoilState(AddByCodeState);
  const setCodeZipDialog = useSetRecoilState(AddCodeZipState);
  const setCodeIdDialog = useSetRecoilState(AddCodeIdState);
  const detail = useRecoilValue(AnalyseDetailState);

  const actions: {
    title: string,
    icon: ReactNode,
    onClick: () => void,
  }[] = [
    {
      title: '输入代码', icon: <Code/>, onClick: () =>
        setCodeDialogOpen({
          open: true,
          analyseId: detail.analyse_id
        })
    },
    {
      title: '上传压缩包', icon: <FolderZip/>, onClick: () =>
        setCodeZipDialog({
          open: true,
          analyseId: detail.analyse_id
        })
    },
    // {
    //   title: '输入提交ID', icon: <Grid3x3/>, onClick: () => setCodeIdDialog(true)
    // },
  ]


  return (
    <ButtonGroup variant={'outlined'}>
      {
        actions.map((action, index) => (
          <Button key={index} startIcon={action.icon} onClick={action.onClick}>{action.title}</Button>
        ))
      }
    </ButtonGroup>
  )

}