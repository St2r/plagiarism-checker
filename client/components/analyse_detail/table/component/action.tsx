import { GridRenderCellParams } from '@mui/x-data-grid/models/params/gridCellParams';
import { Button } from '@mui/material';
import { Delete } from '@mui/icons-material';
import { useSetRecoilState } from 'recoil';
import { CodeState } from '@atoms/analyse/detail/code';
import { useCallback } from 'react';
import { ICode } from '@atoms/analyse/all/all_analyse';
import { DeleteCodeState } from '@atoms/analyse/detail/delete_code';

export default function Action(params: GridRenderCellParams) {
  const setCodeState = useSetRecoilState(CodeState);
  const setDeleteCode = useSetRecoilState(DeleteCodeState);

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