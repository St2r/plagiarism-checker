import { atom } from 'recoil';

export const AppendIdDialogOpen = atom<boolean>({
  key: 'append-id-dialog-open',
  default: false,
})