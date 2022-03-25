import { useRouter } from 'next/router';
import { useEffect } from 'react';
import { atom, useRecoilState, useRecoilValue, useSetRecoilState } from 'recoil';
import { MenuListState } from '@atoms/layout/menu';


export const MatchedRouteState = atom<{pathname: string, title: string}>({
  key: 'matched-route-state',
  default: {
    pathname: '',
    title: '',
  },
})

export const useUpdateRoute = () => {
  const router = useRouter();
  const menu = useRecoilValue(MenuListState);
  const setMatched = useSetRecoilState(MatchedRouteState);

  useEffect(() => {
    let title = '404'

    root:
    for (const submenu of menu) {
      for (const child of submenu.children) {
        if (child.pathReg?.test(router.pathname) === true) {
          title = child.title ?? title
          break root;
        }
      }
    }

    setMatched({
      pathname: router.pathname,
      title,
    });
  }, [menu, router]);
}