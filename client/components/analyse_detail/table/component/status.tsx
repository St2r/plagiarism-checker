import { GridRenderCellParams } from '@mui/x-data-grid/models/params/gridCellParams';
import { Chip, Tooltip } from '@mui/material';
import { Check, Clear, InfoOutlined } from '@mui/icons-material';

export default function CodeStatus(params: GridRenderCellParams) {
  if (params.value === '分析失败') {
    return (
      <Tooltip title={'无法对该代码进行分析，请检查代码'}>
        <Chip icon={<Clear/>} color={'warning'} label={params.value}/>
      </Tooltip>
    )
  } else if (params.value === '分析成功') {
    return (
      <Chip icon={<Check/>} color={'success'} label={params.value}/>
    )
  } else {
    return (
      <Tooltip title={'未对该代码进行分析，尝试运行分析'}>
        <Chip icon={<InfoOutlined/>} color={'info'} label={params.value}/>
      </Tooltip>
    )
  }
}