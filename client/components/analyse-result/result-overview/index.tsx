import { useRecoilState, useRecoilValue, useSetRecoilState } from 'recoil';
import { AnalyseDetailState } from '@atoms/analyse/detail/analyse-detail';
import { Avatar, Button, List, ListItem, ListItemAvatar, ListItemText, Paper, Stack } from '@mui/material';
import { useJump } from '@hooks/useJump';
import { AccessTime, ArrowBack, Compare, Description, Download, Numbers, Refresh, Title } from '@mui/icons-material';
import { useCallback, useMemo, useState } from 'react';
import { LoadingButton } from '@mui/lab';
import { ResultClusterSelected, ResultClustersState } from '@atoms/analyse/result/cluster';
import axios from 'axios';
import useShowMessage from '@hooks/useMessage';

export default function AnalyseResultOverview() {
  const [detail, setDetail] = useRecoilState(AnalyseDetailState);
  const setClusterResult = useSetRecoilState(ResultClustersState);
  const setSelectedCluster = useSetRecoilState(ResultClusterSelected);
  const jump = useJump();
  const showMessage = useShowMessage();


  const [refreshing, setRefreshing] = useState(false);
  const onClickRefresh = useCallback(async () => {
    setRefreshing(true)
    try {
      await axios.get(`/analyse/detail/${detail.analyse_id}`).then(res => res.data.data).then(setDetail)
      await axios.post(`/analyse/cluster/${detail.analyse_id}`).then(res => setClusterResult({
        clusters: res.data.data,
        analyseId: detail.analyse_id
      }))
      setSelectedCluster('');
    } catch (e) {
      console.log(e)
      showMessage('error', '刷新失败')
    } finally {
      setRefreshing(false)
    }
  }, [detail.analyse_id, setClusterResult, setDetail, setSelectedCluster, showMessage]);

  return (
    <Paper sx={{height: '100%', p: 2}}>
      <Stack direction={'row'} spacing={1}>
        <Button
          variant={'outlined'} startIcon={<ArrowBack/>}
          onClick={() => jump(`/analyse/${detail.analyse_id}`)}>分析详情</Button>
        <LoadingButton
          variant={'outlined'} startIcon={<Refresh/>} loadingPosition={'start'} loading={refreshing}
          onClick={onClickRefresh}>刷新</LoadingButton>
      </Stack>
      <List sx={{mt: 2}}>
        <ListItem>
          <ListItemAvatar>
            <Avatar><Title/></Avatar>
          </ListItemAvatar>
          <ListItemText primary={'标题'} secondary={detail.analyse_name}/>
        </ListItem>
        <ListItem>
          <ListItemAvatar>
            <Avatar><Description/></Avatar>
          </ListItemAvatar>
          <ListItemText primary={'描述'} secondary={detail.description || '无描述'}/>
        </ListItem>
        <ListItem>
          <ListItemAvatar>
            <Avatar><AccessTime/></Avatar>
          </ListItemAvatar>
          <ListItemText primary={'耗时'} secondary={detail.duration / 1000 + 's'}/>
        </ListItem>
        <ListItem>
          <ListItemAvatar>
            <Avatar><Numbers/></Avatar>
          </ListItemAvatar>
          <ListItemText primary={'提交数量'} secondary={detail.code_count}/>
        </ListItem>
        <ListItem>
          <ListItemAvatar>
            <Avatar><Compare/></Avatar>
          </ListItemAvatar>
          <ListItemText primary={'对比次数'} secondary={detail.compare_count}/>
        </ListItem>
      </List>
    </Paper>
  )
}