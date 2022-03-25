import { atom } from 'recoil';

export const AppendCodeDialogOpen = atom<boolean>({
  key: 'append-code-dialog-open',
  default: false,
})