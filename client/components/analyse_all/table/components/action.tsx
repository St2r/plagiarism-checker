import { GridRenderCellParams } from '@mui/x-data-grid';
import { Button } from '@mui/material';
import { Delete } from '@mui/icons-material';
import { useSetRecoilState } from 'recoil';
import { AnalysePreviewState } from '@atoms/analyse/all/analyse_detail';
import { IAnalyse } from '@atoms/analyse/all/all_analyse';

export default function Action(params: GridRenderCellParams) {
  const setDetailData = useSetRecoilState(AnalysePreviewState);

  const onClickDetail = () => {
    setDetailData({
      open: true,
      ...params.row as IAnalyse
    });
  }

  return (
    <>
      <Button color='secondary' onClick={onClickDetail}>概况</Button>
      <Button color='secondary'>详情</Button>
      <Button color='error' startIcon={<Delete/>}>删除</Button>
    </>
  )
}