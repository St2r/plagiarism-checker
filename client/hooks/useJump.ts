import { useRecoilValue, useSetRecoilState } from 'recoil';
import { UserLoginStatus } from '@atoms/user/login';
import { useRouter } from 'next/router';
import { useCallback } from 'react';
import { LoginDialogStatus } from '@atoms/user/loginDialog';

export const useJump = () => {
  const isLogin = useRecoilValue(UserLoginStatus);
  const router = useRouter();
  const setLoginDialog = useSetRecoilState(LoginDialogStatus);

  return useCallback((path: string) => {
    if (isLogin || path.startsWith('/home')) {
      router.push(path);
    } else {
      setLoginDialog({
        open: true,
      })
    }
  }, [isLogin]);
}