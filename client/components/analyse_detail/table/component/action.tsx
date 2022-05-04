import { GridRenderCellParams } from '@mui/x-data-grid/models/params/gridCellParams';
import { Button } from '@mui/material';
import { Delete } from '@mui/icons-material';
import { useSetRecoilState } from 'recoil';
import { CodeDetailState } from '@atoms/analyse/detail/code/detail';
import { useCallback } from 'react';
import { ICode } from '@atoms/analyse/all/all_analyse';
import { CodeDeleteState } from '@atoms/analyse/detail/code/delete';

export default function Action(params: GridRenderCellParams) {
  const setCodeState = useSetRecoilState(CodeDetailState);
  const setDeleteCode = useSetRecoilState(CodeDeleteState);

  const onClickCodeDetail = useCallback(() => {
    setCodeState({
      open: true,
      ...(params.row as ICode)
    })
  }, [setCodeState]);

  const onClickCodeDelete = useCallback(() => {
    console.log(params);
    setDeleteCode({
      open: true,
      analyseId: params.row.analyse_id,
      codeId: params.row.code_id,
    })
  }, [setDeleteCode]);

  return (
    <>
      <Button onClick={onClickCodeDetail}>详情</Button>
      <Button
        startIcon={<Delete/>} color='error'
        onClick={onClickCodeDelete}
      >删除</Button>
    </>
  );
}