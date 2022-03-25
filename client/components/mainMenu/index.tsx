import {
  Divider,
  List,
  ListItemButton,
  ListItemIcon,
  ListItemText, SwipeableDrawer,
} from '@mui/material';
import { useRecoilState, useRecoilValue } from 'recoil';
import { MenuListSelector, MenuOpenState } from '@atoms/layout/menu';
import { Fragment, useCallback } from 'react';
import { useToolbarHeight } from '@atoms/layout/theme';
import { useRouter } from 'next/router';

const drawerWidth = 240;

export default function MainMenu() {
  const [open, setOpen] = useRecoilState(MenuOpenState);
  const menuList = useRecoilValue(MenuListSelector);
  const router = useRouter();

  const toolbarHeight = useToolbarHeight()

  const onOpen = useCallback(() => {
    setOpen(true);
  }, [setOpen]);

  const onClose = useCallback(() => {
    setOpen(false);
  }, [setOpen]);

  return (
    <SwipeableDrawer
      disableBackdropTransition
      variant="permanent" open={open} onClose={onClose} onOpen={onOpen}>
      <div style={{paddingTop: toolbarHeight}}/>
      <List style={{width: drawerWidth}}>
        {menuList.map((menu, index) => (
          <Fragment key={index}>
            <List subheader={menu.subHeader} disablePadding>
              {menu.children.map((m, i) => (
                <ListItemButton sx={m.sx} selected={m.selected} key={i} onClick={() => router.push(m.pathName)}>
                  {m.icon && <ListItemIcon>{m.icon}</ListItemIcon>}
                  {m.title && <ListItemText>{m.title}</ListItemText>}
                </ListItemButton>
              ))}
            </List>
            {index + 1 !== menuList.length && <Divider sx={{mt: 2, mb: 1}}/>}
          </Fragment>
        ))}
      </List>
    </SwipeableDrawer>
  )
}