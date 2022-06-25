import { atom } from 'recoil';

export const AnalyseDetailCodeFilter = atom<{code_name: string}>({
  key: 'analyse-detail-code-filter',
  default: {
    code_name: '',
  }
})