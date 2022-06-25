import { atom } from 'recoil';

export const AddCodeIdState = atom<boolean>({
  key: 'append-id-dialog-open',
  default: false,
})