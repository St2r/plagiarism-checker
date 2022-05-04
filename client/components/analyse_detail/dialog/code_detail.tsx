import { Button, Dialog, DialogActions, DialogContent, DialogTitle, TextField } from '@mui/material';
import { useRecoilState } from 'recoil';
import { CodeDetailState } from '@atoms/analyse/detail/code/detail';

export default function CodeDetail() {
  const [data, setDate] = useRecoilState(CodeDetailState);

  const close = () => setDate({open: false});

  const title = '21374220@buaa.edu.cn_49661.c'

  const code = `#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
while(n--)
{
    int sum=0;
    int x;
    scanf("%d",&x);
 for(int k=1;k<x;k++)
    if(x%k==0)
    sum+=k;
 if(sum==x)
 printf("YES\\n");
 else
 printf("NO\\n");
}
return 0;
}
  `

  return (
    <Dialog open={data.open} onBackdropClick={close} fullWidth>
      <DialogTitle>
        查看代码
      </DialogTitle>
      <DialogContent>
        <TextField
          fullWidth margin='dense' label={'标题'}
          InputProps={{readOnly: true}} value={title}
        />
        <TextField
          sx={{fontFamily: 'monospace'}}
          fullWidth margin='dense' label='代码'
          multiline minRows={3} maxRows={15}
          InputProps={{readOnly: true}} value={code}
        />
      </DialogContent>
      <DialogActions>
        <Button variant='outlined' onClick={close}>确认</Button>
      </DialogActions>
    </Dialog>
  )
}