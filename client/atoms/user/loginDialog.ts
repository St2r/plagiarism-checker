import { atom } from 'recoil';

export const LoginDialogStatus = atom<{ open: boolean }>({
  key: 'login-dialog',
  default: {
    open: false
  }
})