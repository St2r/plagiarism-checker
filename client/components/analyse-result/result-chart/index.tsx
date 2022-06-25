import { Button, Paper, Typography } from '@mui/material';
import EChartsReact from 'echarts-for-react';
import { useRecoilValue } from 'recoil';
import { AnalyseDetailState } from '@atoms/analyse/detail/analyse-detail';

export default function AnalyseResultChart() {
  const detail = useRecoilValue(AnalyseDetailState);

  return (
    <Paper sx={{height: 300, p: 2, position: 'relative'}}>
      <Typography sx={{position: 'absolute', top: 16, left: 24}}>相似度分布</Typography>
      <EChartsReact option={{
        xAxis: {
          type: 'category',
          data: ['0.1', '0.2', '0.3', '0.4', '0.5', '0.6', '0.7', '0.8', '0.9']
        },
        yAxis: {
          type: 'value'
        },
        series: [
          {
            data: detail.similarity.slice(1, 9),
            type: 'bar'
          }
        ]
      }} />
    </Paper>
  )
}