import { Button, Dialog, DialogActions, DialogContent, DialogTitle } from '@mui/material';
import DiffViewer from 'react-diff-viewer';

export default function CodeDiffDialog() {
  const code1 = `
const a = 10
const b = 10
const c = () => console.log('foo')

if(a > 10) {
  console.log('sssssssssss')
}

console.log('done')
`
  const code2 = `
const a = 10
const b = 10
const c = () => console.log('foo')

if(a > 10) {
  console.log('bar')
}

console.log('done')
`
  return (
    <Dialog open={false} fullWidth>
      <DialogTitle>代码对比</DialogTitle>
      <DialogContent sx={{minHeight: 300}}>
        <DiffViewer oldValue={code1} newValue={code2} splitView={true} useDarkTheme showDiffOnly={false}/>
      </DialogContent>
      <DialogActions>
        <Button>了解</Button>
      </DialogActions>
    </Dialog>
  )
}