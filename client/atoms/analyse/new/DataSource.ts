import { atom } from 'recoil';

export const DataSourceState = atom<any[]>({
  key: 'data-source',
  default: [],
})