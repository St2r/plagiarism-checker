import { GridRenderCellParams } from '@mui/x-data-grid';
import { Button } from '@mui/material';
import { Delete } from '@mui/icons-material';
import { useSetRecoilState } from 'recoil';
import { AnalysePreviewState } from '@atoms/analyse/all/analyse_detail';
import { IAnalyse } from '@atoms/analyse/all/all_analyse';
import { useJump } from '@hooks/useJump';
import { AnalyseDeleteState } from '@atoms/analyse/all/delete';

export default function Action(params: GridRenderCellParams) {
  const setPreviewData = useSetRecoilState(AnalysePreviewState);
  const setDeleteData = useSetRecoilState(AnalyseDeleteState);
  const jump = useJump();

  const onClickPreview = () => {
    setPreviewData({
      open: true,
      ...params.row as IAnalyse
    });
  }

  const onClickDetail = () => {
    jump(`/analyse/${params.row.analyse_id}`)
  }

  const onClickDelete = () => {
    setDeleteData({
      open: true,
      analyseName: params.row.analyse_name,
      analyseId: params.row.analyse_id,
    })
  }

  return (
    <>
      <Button color='secondary' onClick={onClickPreview}>概况</Button>
      <Button color='secondary' onClick={onClickDetail}>详情</Button>
      <Button color='error' startIcon={<Delete/>} onClick={onClickDelete}>删除</Button>
    </>
  )
}