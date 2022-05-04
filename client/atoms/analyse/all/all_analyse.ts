import { atom } from 'recoil';
import { initialEffect, InitializeAtoms } from '@atoms/index';

export interface IAnalyse {
  analyse_id: string,
  analyse_name: string,
  description: string,
  userId: string,
  code_count: number,
  codes: ICode[],
  status: '等待运行' | '运行完毕',
  result: string,
}

export interface ICode {
  source: string,
  code_id: string,
  code_name: string,
  analyse_id: string,
  code_content: string,
  created_time: string,
}

export const AllAnalyseState = atom<IAnalyse[]>({
  key: 'all-analyse-state',
  default: [],
  effects: [initialEffect(InitializeAtoms.AllAnalysis)]
})