import { atom } from 'recoil';
import { ICode } from '@atoms/analyse/all/all_analyse';

export const CodeState = atom<Partial<ICode> & { open: boolean }>({
  key: 'code-state',
  default: {open: false},
})