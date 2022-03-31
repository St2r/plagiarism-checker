import { Dialog, DialogContent, DialogTitle, Typography } from '@mui/material';

export default function DeleteDialog() {
  return (
    <Dialog open={true}>
      <DialogTitle>确认删除</DialogTitle>
      <DialogContent>
        <Typography>您是否要删除该项分析</Typography>
      </DialogContent>
    </Dialog>
  )
}