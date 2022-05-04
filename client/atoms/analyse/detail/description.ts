import { atom } from 'recoil';

export const AnalyseDescription = atom<{ open: boolean, description: string }>({
  key: 'analyse-description',
  default: {
    open: false,
    description: '',
  }
})