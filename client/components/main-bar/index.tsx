import { IconButton, Toolbar} from '@mui/material';
import AppBar from '@components/Material/AppBar';
import { Menu as MenuIcon } from '@mui/icons-material';
import { useRecoilValue, useSetRecoilState } from 'recoil';
import {MenuOpenState } from '@atoms/layout/menu';
import { MatchedRouteState } from '@atoms/layout/route';

export default function MainBar() {
  const setOpen = useSetRecoilState(MenuOpenState)
  const matchedRouter = useRecoilValue(MatchedRouteState)

  return (
    <AppBar position="relative">
      <Toolbar>
        <IconButton onClick={() => setOpen(true)}>
          <MenuIcon/>
        </IconButton>
        {matchedRouter.title}
      </Toolbar>
    </AppBar>
  )
}