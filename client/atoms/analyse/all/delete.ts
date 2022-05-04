import { atom } from 'recoil';

export const AnalyseDeleteState = atom<{
  open: boolean,
  analyseName: string,
  analyseId: string,
}>({
  key: 'delete-analyse',
  default: {
    open: false,
    analyseName: '',
    analyseId: '',
  }
})