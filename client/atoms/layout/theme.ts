import { atom } from 'recoil';
import { createTheme, Theme, useTheme } from '@mui/material';

export const ThemeState = atom<Theme>({
  key: 'theme-state',
  dangerouslyAllowMutability: true,
  default: createTheme({
    palette: {
      mode: 'dark',
    },
    components: {
      MuiListItemIcon: {
        styleOverrides: {
          // root: {
          //   minWidth: 0
          // }
        }
      }
    }
  }),
})

export const useToolbarHeight = () => {
  const theme = useTheme();
  return theme.mixins['toolbar'].minHeight;
}