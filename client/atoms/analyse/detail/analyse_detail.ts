import { atom } from 'recoil';
import { IAnalyse } from '@atoms/analyse/all/all_analyse';
import { initialEffect, InitializeAtoms } from '@atoms/index';

export const AnalyseDetailState = atom<IAnalyse>({
  key: 'analyse-detail',
  default: {} as IAnalyse,
  effects: [initialEffect(InitializeAtoms.AnalyseDetail)]
})