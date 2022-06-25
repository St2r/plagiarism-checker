import { useRecoilValue, useSetRecoilState } from 'recoil';
import { UserLoginStatus } from '@atoms/user/login';
import { useRouter } from 'next/router';
import { useCallback } from 'react';
import { LoginDialogStatus } from '@atoms/user/login-dialog';
import { NewDialogOpen } from '@atoms/analyse/new/new_dialog';

export const useJump = () => {
  const isLogin = useRecoilValue(UserLoginStatus);
  const router = useRouter();
  const setLoginDialog = useSetRecoilState(LoginDialogStatus);
  const setAnalyseNewDialogOpen = useSetRecoilState(NewDialogOpen);

  return useCallback((path: string) => {
    if (isLogin && path === 'link://dialog?analyse_new') {
      setAnalyseNewDialogOpen(true)
    } else if (isLogin || path.startsWith('/home')) {
      router.push(path);
    } else {
      setLoginDialog({
        open: true,
      })
    }
  }, [isLogin, setAnalyseNewDialogOpen]);
}