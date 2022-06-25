import { Button, Dialog, DialogActions, DialogContent, DialogTitle } from '@mui/material';
import { DataGrid, GridColDef } from '@mui/x-data-grid';

export default function CodeGroup() {
  return (
    <Dialog open={false} fullWidth>
      <DialogTitle>相似代码组-1</DialogTitle>
      <DialogContent sx={{height: 300}}>
        <DataGrid columns={columns} rows={rows} hideFooter/>
      </DialogContent>
      <DialogActions/>
    </Dialog>
  )
}

const DefaultColumnDef: GridColDef = {
  field: 'undefined',
  flex: 1,
  align: 'center',
  headerAlign: 'center',
  disableColumnMenu: true,
  sortable: false,
}

const columns: GridColDef[] = [
  {...DefaultColumnDef, field: 'name', headerName: '代码名称'},
  {
    ...DefaultColumnDef, headerName: '操作', renderCell: () => (
      <Button>查看</Button>
    )
  }
]

const rows = [
  {id: 1, name: '21374308@buaa.edu.cn_49745.c'},
  {id: 2, name: '21374220@buaa.edu.cn_49661.c'}
]