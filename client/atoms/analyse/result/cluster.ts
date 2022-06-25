import { atom } from 'recoil';
import { initialEffect, InitializeAtoms } from '@atoms/index';

export interface IClusterCode {
  cluster_code_id: string,
  cluster_id: string,
  analyse_id: string,
  code_id: string,
  name: string,
  plag_lines: number[],
}

export interface ICluster {
  cluster_id: string,
  analyse_id: string,
  // code ids
  code_list: string[],
  codes: IClusterCode[],
  name: string,
  marked: boolean,
}

export const ResultClustersState = atom<{
  analyseId: string,
  clusters: ICluster[],
}>({
  key: 'result-clusters',
  default: {
    analyseId: '',
    clusters: [],
  },
  effects: [initialEffect(InitializeAtoms.AnalyseDetailResult)]
})

export const ResultClusterSelected = atom<string>({
  key: 'result-cluster-selected',
  default: '',
})
