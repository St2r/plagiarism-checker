import { GridRenderCellParams } from '@mui/x-data-grid/models/params/gridCellParams';
import { Button } from '@mui/material';
import { Delete } from '@mui/icons-material';
import { useSetRecoilState } from 'recoil';
import { CodeState } from '@atoms/analyse/detail/code';
import { useCallback } from 'react';
import { ICode } from '@atoms/analyse/all/all_analyse';

export default function Action(params: GridRenderCellParams) {
  const setCodeState = useSetRecoilState(CodeState);

  const onClickCodeDetail = useCallback(() => {
    console.log(params);
    setCodeState({
      open: true,
      ...(params.row as ICode)
    })
  }, [setCodeState]);

  return (
    <>
      <Button onClick={onClickCodeDetail}>详情</Button>
      <Button
        startIcon={<Delete/>} color='error'
      >删除</Button>
    </>
  );
}