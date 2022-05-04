import { GridColDef } from '@mui/x-data-grid';
import Action from '@components/analyse_detail/table/component/action';
import { Chip } from '@mui/material';
import dayjs from 'dayjs';
import CodeStatus from '@components/analyse_detail/table/component/status';

const DefaultColumnDes: GridColDef = {
  field: 'undefined',
  flex: 1,
  align: 'center',
  headerAlign: 'center',
  disableColumnMenu: true,
  sortable: false,
}

export const columns: GridColDef[] = [
  {
    ...DefaultColumnDes, field: 'code_name', headerName: '标题', flex: 1,
    sortable: true
  },
  {
    ...DefaultColumnDes, field: 'source', headerName: '来源', flex: 1,
    minWidth: 100,
    renderCell: (param) => (
      <Chip label={param.value}/>
    )
  },
  {
    ...DefaultColumnDes, field: 'created_time', headerName: '最后修改', flex: 1,
    minWidth: 150,
    renderCell: (param) => dayjs(param.value).format('YYYY-MM-DD HH:mm:ss')
  },
  // {
  //   ...DefaultColumnDes, field: 'status', headerName: '状态', flex: 1, minWidth: 110,
  //   renderCell: CodeStatus
  // },
  {
    ...DefaultColumnDes, field: 'action', headerName: '操作', flex: 2,
    renderCell: Action
  },
]