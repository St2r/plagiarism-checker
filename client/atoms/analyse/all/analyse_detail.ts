import { atom } from 'recoil';
import { IAnalyse } from '@atoms/analyse/all/all_analyse';

export const AnalysePreviewState = atom<Partial<IAnalyse> & {open: boolean}>({
  key: 'analyse-detail-state',
  default: {
    open: false,
  }
})