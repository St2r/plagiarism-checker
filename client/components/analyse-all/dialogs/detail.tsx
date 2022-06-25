import {
  Avatar,
  Box,
  Button, Chip,
  Dialog,
  DialogActions,
  DialogContent,
  DialogTitle, Divider,
  Grid, IconButton, List,
  ListItem, ListItemAvatar, ListItemButton, ListItemSecondaryAction, ListItemText, ListSubheader,
  Stack, TextField,
  Typography
} from '@mui/material';
import { useRecoilState } from 'recoil';
import { AnalysePreviewState } from '@atoms/analyse/all/analyse_detail';
import { useJump } from '@hooks/useJump';
import { Folder, Send, Subtitles, Title } from '@mui/icons-material';
import { useCallback } from 'react';
import isEmpty from 'lodash/isEmpty';

export default function AnalysePreviewDialog() {
  const [data, setData] = useRecoilState(AnalysePreviewState);
  const jump = useJump();
  const close = useCallback(() => setData(raw => ({...raw, open: false})), [setData])

  const goDetail = useCallback(() => {
    close()
    jump(`/analyse/${data.analyse_id}`)
  }, [close, data.analyse_id, jump])

  return (
    <Dialog open={data.open} onBackdropClick={close} fullWidth>
      <DialogTitle>分析概要</DialogTitle>
      <DialogContent>
        <List>
          <ListItem>
            <ListItemAvatar>
              <Avatar><Title/></Avatar>
            </ListItemAvatar>
            <ListItemText
              sx={{lineBreak: 'anywhere'}}
              primary={'标题'}
              secondary={data.analyse_name}
            />
          </ListItem>
          <Divider variant={'inset'}/>

          <ListItem>
            <ListItemAvatar>
              <Avatar><Subtitles/></Avatar>
            </ListItemAvatar>
            <ListItemText
              sx={{lineBreak: 'anywhere'}}
              primary={'描述'}
              secondary={isEmpty(data.description) ? '无描述' : data.description}
            />
          </ListItem>
          <Divider variant={'inset'}/>

          <ListItem>
            <ListItemAvatar>
              <Avatar><Folder/></Avatar>
            </ListItemAvatar>
            <ListItemText
              sx={{lineBreak: 'anywhere'}}
              primary={'提交总数'}
              secondary={data.code_count}
            />
            <ListItemSecondaryAction>
              <Button variant={'outlined'} endIcon={<Send/>} onClick={goDetail}>查看提交</Button>
            </ListItemSecondaryAction>
          </ListItem>
        </List>
      </DialogContent>
      <DialogActions>
        <Button variant='outlined' onClick={close}>关闭</Button>
      </DialogActions>
    </Dialog>
  );
}