import { atom } from 'recoil';

export const AddByCodeState = atom<{open: boolean, analyseId: string}>({
  key: 'append-code-dialog-open',
  default: {
    open: false,
    analyseId: '',
  },
})