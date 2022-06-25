import { GridCellParams, GridColDef, GridFilterItem } from '@mui/x-data-grid';
import Action from '@components/analyse-detail/table/column/action';
import { Chip } from '@mui/material';
import dayjs from 'dayjs';
import CodeStatus from '@components/analyse-detail/table/column/status';

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
    ...DefaultColumnDes, field: 'code_name', headerName: '标题', flex: 2,
    sortable: true,
    filterable: false,
    disableExport: true,
    filterOperators: [
      {
        label: 'includes',
        value: 'includes',
        getApplyFilterFn: (filterItem: GridFilterItem) => {
          return (params: GridCellParams<string>): boolean => {
            return params.value.includes(filterItem.value)
          }
        }
      }
    ]
  },
  {
    ...DefaultColumnDes, field: 'source', headerName: '来源', flex: 1,
    minWidth: 100,
    renderCell: (param) => {
      let label = '';
      if (param.value === 'zip_batch') {
        label = '压缩包批量提交'
      } else if (param.value === 'single_file') {
        label = '单文件提交'
      }
      return (
      <Chip label={label}/>
    )}
  },
  {
    ...DefaultColumnDes, field: 'created_time', headerName: '最后修改', flex: 1,
    minWidth: 150, sortable: true,
    renderCell: (param) => dayjs(param.value).format('YYYY-MM-DD HH:mm:ss')
  },
  {
    ...DefaultColumnDes, field: 'status', headerName: '状态', flex: 1, minWidth: 110,
    renderCell: CodeStatus,
    sortable: true,
  },
  {
    ...DefaultColumnDes, field: 'action', headerName: '操作', flex: 1,
    minWidth: 200,
    renderCell: Action
  },
]