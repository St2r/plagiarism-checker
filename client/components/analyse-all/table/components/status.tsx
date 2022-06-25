import { GridRenderCellParams } from '@mui/x-data-grid';
import { Chip, ChipProps } from '@mui/material';
import { Check, Clear, FastForward, InfoOutlined } from '@mui/icons-material';
import { IAnalyse } from '@atoms/analyse/all/all_analyse';

export default function Status(params: GridRenderCellParams) {
  let prop: Partial<ChipProps> = {}
  const status = params.value as IAnalyse['status']

  if (status === 'not_start') {
    prop = {
      color: 'info',
      icon: <Clear/>,
      label: '等待分析'
    }
  } else if (status === 'running') {
    prop = {
      color: 'info',
      icon: <FastForward/>,
      label: '正在运行'
    }
  } else if (status === 'finished') {
    prop = {
      color: 'success',
      icon: <Check/>,
      label: '分析完毕'
    }
  }

  return (
    <Chip
      {...prop} variant='outlined'
    />
  )
}