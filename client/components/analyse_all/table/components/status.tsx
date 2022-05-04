import { GridRenderCellParams } from '@mui/x-data-grid';
import { Chip, ChipProps } from '@mui/material';
import { Check, Clear, InfoOutlined } from '@mui/icons-material';

export default function Status(params: GridRenderCellParams) {
  let prop: Partial<ChipProps> = {}

  if (params.value === '等待运行') {
    prop = {
      color: 'info',
      icon: <Clear/>
    }
  } else if (params.value === '运行完毕') {
    prop = {
      color: 'success',
      icon: <Check/>
    }
  }

  return (
    <Chip
      {...prop}
      label={params.value} variant='outlined'
    />
  )
}