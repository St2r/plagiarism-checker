import { GridRenderCellParams } from '@mui/x-data-grid/models/params/gridCellParams';
import { Chip, Tooltip } from '@mui/material';
import { Check, Clear, InfoOutlined } from '@mui/icons-material';

export default function CodeStatus(params: GridRenderCellParams) {
  if (params.value === 'too_short') {
    return (
      <Tooltip title={'代码长度过短，未达到分析标准'}>
        <Chip variant={'outlined'} icon={<Clear/>} color={'warning'} label={'长度过短'}/>
      </Tooltip>
    )
  } else if (params.value === 'syntax_error') {
    return (
      <Tooltip title={'代码过短或存在语法错误'}>
        <Chip variant={'outlined'} icon={<Clear/>} color={'warning'} label={'解析错误'}/>
      </Tooltip>
    )
  } else if (params.value === 'analysed') {
    return (
      <Chip variant={'outlined'} icon={<Check/>} color={'success'} label={'分析成功'}/>
    )
  } else {
    return (
      <Tooltip title={'未对该代码进行分析，请先运行分析'}>
        <Chip variant={'outlined'} icon={<InfoOutlined/>} color={'info'} label={'待分析'}/>
      </Tooltip>
    )
  }
}