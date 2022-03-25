import React, { useState } from 'react';
import {
  Box,
  Divider,
  ToggleButton as MuiToggleButton,
  ToggleButtonGroup,
  ToggleButtonProps,
} from '@mui/material';
import SourceCustom from '@components/AnalyseCreate/Step2/SourceCustom';

const ToggleButton = (props: ToggleButtonProps) => (
  <MuiToggleButton {...props} sx={{...props.sx, pl: 3, pr: 3}}>{props.children}</MuiToggleButton>
)

export default function Step2() {
  const [dataType, setDataType] = useState('custom');

  const handleAlignment = (
    event: React.MouseEvent<HTMLElement>,
    newAlignment: string | null,
  ) => {
    if (newAlignment) {
      setDataType(newAlignment);
    }
  };

  return (
    <>
      <ToggleButtonGroup
        exclusive size={"small"}
        value={dataType} onChange={handleAlignment}
      >
        <ToggleButton disabled value="comp" sx={{pl: 3, pr: 3}}>选择一场比赛</ToggleButton>
        <ToggleButton value="custom">自定义数据源</ToggleButton>
      </ToggleButtonGroup>
      <Divider sx={{mt: 2, mb: 2}}/>
      <Box sx={{flexGrow: 1, flexShrink: 1, position: 'relative'}}>
        {/*渲染不同的数据面板*/}
        {dataType === 'comp' && <SourceComp/>}
        {dataType === 'custom' && <SourceCustom/>}
      </Box>
    </>
  )
}

const SourceComp = () => {
  return (
    <div>选择比赛</div>
  )
}
