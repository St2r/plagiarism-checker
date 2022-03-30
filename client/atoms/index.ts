import { UserLoginStatus } from '@atoms/user/login';
import { RecoilState } from 'recoil';

export const enum InitializeAtoms {
  UserLogin,
}

export const InitializeAtomsMap: Record<InitializeAtoms, RecoilState<any>> = {
  [InitializeAtoms.UserLogin]: UserLoginStatus,
}