import {
  List,
  Avatar,
  Button,
  Dialog,
  DialogActions,
  DialogContent,
  DialogTitle,
  ListItem,
  ListItemAvatar, ListItemText, Typography, ListItemButton
} from '@mui/material';
import { useRecoilState } from 'recoil';
import { AnalyseReportState } from '@atoms/analyse/detail/report';
import { AccessTime, Code, Title } from '@mui/icons-material';
import { DataGrid, GridColDef } from '@mui/x-data-grid';

export default function ReportDialog() {
  const [state, setState] = useRecoilState(AnalyseReportState)
  const close = () => setState(raw => ({...raw, open: false}))
  return (
    <Dialog open={state.open} onBackdropClick={close} fullWidth>
      <DialogTitle>分析报告</DialogTitle>

      <DialogContent>
        <List>
          <ListItem>
            <ListItemAvatar>
              <Avatar><Title/></Avatar>
            </ListItemAvatar>
            <ListItemText primary={'标题'} secondary={'测试-快速排序'}/>
          </ListItem>
          <ListItem>
            <ListItemAvatar>
              <Avatar><AccessTime/></Avatar>
            </ListItemAvatar>
            <ListItemText primary={'耗时'} secondary={'34ms'}/>
          </ListItem>
          <ListItem>
            <ListItemAvatar>
              <Avatar><Code/></Avatar>
            </ListItemAvatar>
            <DataGrid
              sx={{height: 300}} columns={columns} rows={rows} hideFooter
              components={{Header: () => <Typography sx={{p: 1}}>相似代码片段组</Typography>}}
            />
          </ListItem>
        </List>
      </DialogContent>
      <DialogActions>
        <Button onClick={close}>了解</Button>
      </DialogActions>
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
  {...DefaultColumnDef, field: 'name', headerName: '相似组名称'},
  {...DefaultColumnDef, field: 'code_count', headerName: '代码数目'},
  {
    ...DefaultColumnDef, field: 'same', headerName: '操作', renderCell: () => (
      <Button>查看</Button>
    )
  },
]

const rows = [
  {id: '1', name: '相似组-1', code_count: '1159'},
  {id: '2', name: '相似组-2', code_count: '73'},
  {id: '3', name: '相似组-3', code_count: '2'},
  {id: '5', name: '相似组-4', code_count: '4'}
]
