import { atom } from 'recoil';

export const DeleteCodeState = atom<{
  open: boolean,
  analyseId: string,
  codeId: string,
}>({
  key: 'delete-code',
  default: {
    open: false,
    analyseId: '',
    codeId: '',
  }
})