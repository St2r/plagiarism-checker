import { GridColDef } from '@mui/x-data-grid';
import Status from '@components/analyse-all/table/components/status';
import Action from '@components/analyse-all/table/components/action';

const DefaultColumnDes: Omit<GridColDef, 'field'> = {
  flex: 1,
  align: 'center',
  headerAlign: 'center',
  minWidth: 100,
  disableColumnMenu: true,
}

export const column: GridColDef[] = [
  {...DefaultColumnDes, field: 'analyse_name', headerName: '名称'},
  {
    ...DefaultColumnDes, field: 'status', headerName: '状态',
    renderCell: Status
  },
  {
    ...DefaultColumnDes, field: 'actions', headerName: '操作',
    minWidth: 200, flex: 2,
    renderCell: Action,
  },
];