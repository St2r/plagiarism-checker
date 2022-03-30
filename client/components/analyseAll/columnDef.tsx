import { GridColDef } from '@mui/x-data-grid';
import { Box, Button, ButtonGroup, IconButton, Tooltip } from '@mui/material';
import { Delete, Info } from '@mui/icons-material';

const DefaultColumnDes: Omit<GridColDef, 'field'> = {
  flex: 1,
  align: 'center',
  headerAlign: 'center',
  minWidth: 100,
  disableColumnMenu: true,
}

export const columnDef: GridColDef[] = [
  {...DefaultColumnDes, field: 'name', headerName: '名称'},
  {...DefaultColumnDes, field: 'time', headerName: '创建日期'},
  {
    ...DefaultColumnDes, field: 'status', headerName: '状态',
    renderCell: () => {
      return (
        <Box sx={{display: 'flex', alignItems: 'center', justifyContent: 'center'}}>
          <Button component={'div'} size={'small'} variant={'contained'} color={'success'} disableRipple>已完成</Button>
          <Tooltip title={"监测到抄袭风险"}>
            <IconButton disableRipple color={'warning'}><Info/></IconButton>
          </Tooltip>
        </Box>
      )
    }
  },
  {
    ...DefaultColumnDes, field: 'actions', headerName: '操作',
    minWidth: 200, flex: 2,
    renderCell: () => {
      return (
        <>
          <Button color='secondary'>概况</Button>
          <Button color='secondary'>详情</Button>
          <Button color='error' startIcon={<Delete/>}>删除</Button>
        </>
      )
    }
  },
];