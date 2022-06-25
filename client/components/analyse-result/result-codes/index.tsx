import { Box, Button, Paper, Stack, Typography } from '@mui/material';
import { DataGrid, GridColDef, GridRenderCellParams } from '@mui/x-data-grid';
import { useRecoilState, useRecoilValue } from 'recoil';
import { ResultClusterSelected, ResultClustersState } from '@atoms/analyse/result/cluster';
import { useOpenCodeDetail } from '@atoms/analyse/detail/code/detail';
import { useCallback } from 'react';
import { ResultCompareState } from '@atoms/analyse/result/result-compare';


const DefaultColumnDef: GridColDef = {
  field: 'undefined',
  flex: 1,
  align: 'center',
  headerAlign: 'center',
  disableColumnMenu: true,
  sortable: false,
}

const Action = (params: GridRenderCellParams) => {
  const openCode = useOpenCodeDetail();

  const onClick = useCallback(() => {
    openCode(params.value)
  }, [openCode, params.value]);

  return (
    <Button onClick={onClick}>查看</Button>
  )
}


const columns: GridColDef[] = [
  {...DefaultColumnDef, field: 'name', headerName: '代码名称'},
  {
    ...DefaultColumnDef, field: 'code_id', headerName: '操作', renderCell: Action,
  }
]

const UnSelected = () => {
  return (
    <Box sx={{display: 'flex', alignItems: 'center', justifyContent: 'center', height: '100%'}}>
      <Typography>请选择相似代码聚类</Typography>
    </Box>
  )
}

const Toolbar = () => {
  const [resultCompare, setResultCompare] = useRecoilState(ResultCompareState);

  const onClickCompare = () => {
    setResultCompare(raw => ({...raw, open: true}))
  }

  return (
    <Stack direction={'row'} alignItems={'center'} spacing={2}>
      <Typography>聚类代码详情</Typography>
      <Button variant={'outlined'} onClick={onClickCompare}>对比</Button>
    </Stack>
  )
}


export default function AnalyseResultCodes() {
  const clusterState = useRecoilValue(ResultClustersState);
  const selectedCluster = useRecoilValue(ResultClusterSelected);

  const valid = clusterState.clusters.find(value => value.cluster_id === selectedCluster);

  return (
    <Paper sx={{height: '100%', p: 2}}>
      {!valid && <UnSelected/>}
      {valid && <DataGrid
          columns={columns} rows={valid.codes} sx={{border: 'none'}} hideFooter
          getRowId={item => item.cluster_code_id}
          components={{
            Toolbar,
          }}
      />}
    </Paper>
  )
}