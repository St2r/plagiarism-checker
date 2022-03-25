import { atom } from 'recoil';

export const UserLoginStatus = atom<boolean>({
  key: 'user-login-status',
  default: false,
})