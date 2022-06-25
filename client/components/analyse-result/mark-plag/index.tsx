import { GridRenderCellParams } from '@mui/x-data-grid/models/params/gridCellParams';
import { useRecoilState, useSetRecoilState } from 'recoil';
import { ResultClustersState } from '@atoms/analyse/result/cluster';
import useShowMessage from '@hooks/useMessage';
import { useCallback } from 'react';
import axios from 'axios';
import { Button } from '@mui/material';
import { CheckBox, CheckBoxOutlineBlank } from '@mui/icons-material';

type TMarkPlagProps = {
  analyse_id: string,
  cluster_id: string,
}

export default function MarkPlag(props: TMarkPlagProps) {
  const [clusterState, setClusterState] = useRecoilState(ResultClustersState);
  const showMessage = useShowMessage();
  const cluster = clusterState.clusters.find(c => c.cluster_id === props.cluster_id)

  const onClick = useCallback(async () => {
    try {
      if (!cluster) {
        return;
      }
      await axios.post(`/analyse/cluster/${props.cluster_id}/mark`, {marked: !cluster.marked});
      setClusterState(raw => ({
        ...raw,
        clusters: raw.clusters.map(c => c.cluster_id === props.cluster_id ? {...c, marked: !cluster.marked} : {...c})
      }))
      showMessage('success', '标记成功');
    } catch (e) {
      showMessage('error', '标记失败');
    }
  }, [cluster, props.cluster_id, setClusterState, showMessage]);

  return (
    <Button variant={'outlined'} startIcon={cluster?.marked === true ? <CheckBox/> : <CheckBoxOutlineBlank/>}
            onClick={onClick}>标记为抄袭</Button>
  )
}