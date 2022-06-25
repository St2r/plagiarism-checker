import { AppBar, Button, Dialog, IconButton, Paper, Stack, TextField, Toolbar, Typography } from '@mui/material';
import { useRecoilState, useRecoilValue } from 'recoil';
import { ResultCompareState } from '@atoms/analyse/result/result-compare';
import { Close } from '@mui/icons-material';
import MarkPlag from '@components/analyse-result/mark-plag';
import { AnalyseDetailState } from '@atoms/analyse/detail/analyse-detail';
import { ICluster, ResultClusterSelected, ResultClustersState } from '@atoms/analyse/result/cluster';
import CodePanel from '@components/analyse-result/result-compare/code-panel';

export default function ResultCompareDialog() {
  const analyseDetail = useRecoilValue(AnalyseDetailState);
  const clusterState = useRecoilValue(ResultClustersState);
  const clusterId = useRecoilValue(ResultClusterSelected);
  const [state, setState] = useRecoilState(ResultCompareState);

  const cluster = clusterState.clusters.find(c => c.cluster_id === clusterId) as ICluster

  const close = () => {
    setState(raw => ({...raw, open: false}));
  }

  if (!cluster) {
    return null
  }

  return (
    <Dialog open={state.open} fullScreen onBackdropClick={close}>
      <AppBar sx={{position: 'sticky'}}>
        <Toolbar>
          <Stack spacing={1} direction={'row'}>
            <Button variant={'outlined'} startIcon={<Close/>} onClick={close}>关闭</Button>
            <MarkPlag analyse_id={analyseDetail.analyse_id} cluster_id={clusterId}/>
          </Stack>
        </Toolbar>
      </AppBar>
      <Stack spacing={2} direction={'row'} sx={{p: 2, overflowX: 'auto'}} justifyContent={'flex-start'}>
        {cluster.codes.map(code => (
          <CodePanel key={code.code_id} code_id={code.code_id} plagLines={code.plag_lines || []}/>
        ))}
      </Stack>
    </Dialog>
  )
}