import { atom } from 'recoil';
import { initialEffect, InitializeAtoms } from '@atoms/index';

export interface IAnalyse {
  analyse_id: string,
  analyse_name: string,
  description: string,
  userId: string,
  codes: ICode[],
}

export interface ICode {
  source: string,
  code_id: string,
  analyse_id: string,
  code_content: string,
  created_time: string,
}

export const AllAnalyseState = atom<IAnalyse[]>({
  key: 'all-analyse-state',
  default: [],
  effects: [initialEffect(InitializeAtoms.AllAnalysis)]
})