import { GetServerSidePropsResult, NextPageContext } from 'next';
import { getAnalyseDetailSP } from '../index';
import { Button, Grid, Paper, Stack } from '@mui/material';
import { useJump } from '@hooks/useJump';
import { useRecoilState, useRecoilValue } from 'recoil';
import { AnalyseDetailState } from '@atoms/analyse/detail/analyse-detail';
import AnalyseResultOverview from '@components/analyse-result/result-overview';
import AnalyseResultChart from '@components/analyse-result/result-chart';
import AnalyseResultClusters from '@components/analyse-result/result-cluster';
import AnalyseResultCodes from '@components/analyse-result/result-codes';
import merge from 'lodash/merge';
import { InitializeAtoms } from '@atoms/index';
import get from 'lodash/get';
import axios from 'axios';
import { useRouter } from 'next/router';
import { useEffect } from 'react';
import { ResultClustersState } from '@atoms/analyse/result/cluster';

export default function AnalyseResult() {
  const aid = useRouter().query.aid as string;
  const [detail, setDetail] = useRecoilState(AnalyseDetailState);
  const [result, setResult] = useRecoilState(ResultClustersState);

  useEffect(() => {
    axios.get(`/analyse/detail/${aid}`)
      .then(res => setDetail(res.data.data))
      .catch(console.warn)
    axios.post(`/analyse/cluster/${aid}`)
      .then(res => setResult({clusters: res.data.data, analyseId: aid}))
      .catch(console.warn)
  }, [setDetail, aid, setResult]);

  return (
    <Paper sx={{width: '100%', height: '100%', p: 1}} variant={'outlined'}>
      <Grid
        container
        spacing={1}
        sx={{height: '100%'}}
      >
        <Grid
          container item xs
          direction={'column'}
          spacing={1}
        >
          <Grid item xs>
            <AnalyseResultOverview/>
          </Grid>
          <Grid item xs={'auto'}>
            <AnalyseResultChart/>
          </Grid>
        </Grid>
        <Grid item xs>
          <AnalyseResultClusters/>
        </Grid>
        <Grid item xs>
          <AnalyseResultCodes/>
        </Grid>
      </Grid>
    </Paper>
  )
}

export async function getServerSideProps(context: NextPageContext): Promise<GetServerSidePropsResult<any>> {
  const sp = await getAnalyseDetailSP(context)

  const aid = get(context, 'params.aid');
  const clusters = await axios.post(`/analyse/cluster/${aid}`).then(res => {
    return res.data.data
  }).catch(() => null);

  if (!clusters) {
    return merge(sp, {
      notFound: true
    })
  }


  return merge(sp, {
    props: {
      atom: {
        [InitializeAtoms.AnalyseDetailResult]: {
          analyseId: aid,
          clusters,
        },
      }
    }
  })
}