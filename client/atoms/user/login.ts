import { atom } from 'recoil';
import { initialEffect, InitializeAtoms } from '@atoms/index';

export const UserLoginStatus = atom<boolean>({
  key: 'user-login-status',
  default: false,
  effects_UNSTABLE: [initialEffect(InitializeAtoms.UserLogin)]
})