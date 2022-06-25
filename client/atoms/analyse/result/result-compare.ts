import { atom } from 'recoil';

export const ResultCompareState = atom<{ open: boolean }>({
  key: 'result-compare-state',
  default: {
    open: false,
  }
})