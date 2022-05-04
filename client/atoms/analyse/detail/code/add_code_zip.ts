import { atom } from 'recoil';

export const AddCodeZipState = atom<{open: boolean, analyseId: string}>({
  key: 'append-code-zip',
  default: {
    open: false,
    analyseId: '',
  },
})