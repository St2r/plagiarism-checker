import { GridRenderCellParams } from '@mui/x-data-grid';
import { Box, Chip } from '@mui/material';
import { Done } from '@mui/icons-material';
import { useSetRecoilState } from 'recoil';
import { AnalysePreviewState } from '@atoms/analyse/all/analyse_detail';

export default function Status(params: GridRenderCellParams) {

  return (
    <Box sx={{display: 'flex', alignItems: 'center', justifyContent: 'center'}}>
      <Chip
        label='已完成' variant='outlined' color={'success'}
        icon={<Done/>}
      />
    </Box>
  )
}