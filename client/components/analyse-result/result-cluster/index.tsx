import { Button, Paper, Stack, Typography } from '@mui/material';
import { DataGrid, GridColDef, GridSelectionModel } from '@mui/x-data-grid';
import { CheckBox, CheckBoxOutlineBlank, ChevronLeft, ChevronRight, Download } from '@mui/icons-material';
import { useRecoilState, useRecoilValue, useSetRecoilState } from 'recoil';
import { ICluster, ResultClusterSelected, ResultClustersState } from '@atoms/analyse/result/cluster';
import { useCallback, useMemo, useState } from 'react';
import { GridRenderCellParams } from '@mui/x-data-grid/models/params/gridCellParams';
import axios from 'axios';
import useShowMessage from '@hooks/useMessage';
import { LoadingButton } from '@mui/lab';
import { AnalyseDetailState } from '@atoms/analyse/detail/analyse-detail';
import MarkPlag from '@components/analyse-result/mark-plag';

const DefaultColumnDef: GridColDef = {
  field: 'undefined',
  flex: 1,
  align: 'center',
  headerAlign: 'center',
  disableColumnMenu: true,
  sortable: false,
}

const Action = (params: GridRenderCellParams) => {
  return (
    <MarkPlag analyse_id={params.row.analyse_id} cluster_id={params.row.cluster_id}/>
  )
}

const columns: GridColDef[] = [
  {...DefaultColumnDef, field: 'name', headerName: '相似组名称', sortable: true},
  {...DefaultColumnDef, field: 'code_count', headerName: '代码数目'},
  {
    ...DefaultColumnDef, field: 'marked', headerName: '操作', renderCell: Action
  },
]

const Toolbar = () => {
  const detail = useRecoilValue(AnalyseDetailState);
  const clusterResult = useRecoilValue(ResultClustersState);


  const exportable = useMemo(() => {
    return clusterResult.clusters.find(c => c.marked)
  }, [clusterResult.clusters]);

  const [exporting, setExporting] = useState(false);
  const onClickExport = useCallback(async () => {
    setExporting(true)
    try {
      const str = await axios.post('/analyse/result/export', {
        analyse_id: detail.analyse_id,
      }).then(res => res.data.data)
      const content2 = `data:text/csv;charset=utf-8,${str}`
      const link = document.createElement("a");
      link.setAttribute("href", content2);
      link.setAttribute("download", `${detail.analyse_name}-查重结果.csv`);
      document.body.appendChild(link);
      link.click()
      document.body.removeChild(link)
    } catch (e) {

    } finally {
      setExporting(false)
    }
  }, [detail.analyse_id, detail.analyse_name]);

  return (
    <Stack direction={'row'} spacing={2} alignItems={'center'}>
      <Typography>相似代码聚类</Typography>
      <LoadingButton
        disabled={!exportable}
        variant={'outlined'} startIcon={<Download/>} loadingPosition={'start'} loading={exporting}
        onClick={onClickExport}>导出报告</LoadingButton>
    </Stack>
  )
}


export default function AnalyseResultClusters() {
  const result = useRecoilValue(ResultClustersState);
  const setSelectedCluster = useSetRecoilState(ResultClusterSelected);

  return (
    <Paper sx={{height: '100%', p: 2}}>
      <DataGrid
        initialState={{
          sorting: {
            sortModel: [{field: 'name', sort: 'asc'}]
          }
        }}
        columns={columns} rows={result.clusters} hideFooter sx={{border: 'none'}} getRowId={item => item.cluster_id}
        onSelectionModelChange={(model: GridSelectionModel) => {
          const selectedCluster = result.clusters.find(item => item.cluster_id === model[0])
          selectedCluster && setSelectedCluster(selectedCluster.cluster_id)
        }}
        components={{Toolbar}}
      />
    </Paper>
  )
}