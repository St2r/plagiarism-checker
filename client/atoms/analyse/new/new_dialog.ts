import { atom } from 'recoil';

export const NewDialogOpen = atom<boolean>({
  key: 'new-dialog-open',
  default: false
})