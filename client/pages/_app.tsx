import '../styles/globals.css'
import '@fontsource/roboto/300.css';
import '@fontsource/roboto/400.css';
import '@fontsource/roboto/500.css';
import '@fontsource/roboto/700.css';
import '@fontsource/noto-sans-sc/300.css';
import '@fontsource/noto-sans-sc/400.css';
import '@fontsource/noto-sans-sc/500.css';
import '@fontsource/noto-sans-sc/700.css';
import type { AppProps } from 'next/app'
import { RecoilRoot, useRecoilSnapshot, useRecoilValue } from 'recoil';
import { Paper, styled, ThemeProvider, useTheme } from '@mui/material';
import MainMenu from '@components/mainMenu';
import MainBar from '@components/main-bar';
import { ThemeState } from '@atoms/layout/theme';
import { PaperProps } from '@mui/material/Paper/Paper';
import { useUpdateRoute } from '@atoms/layout/route';
import { GetServerSidePropsResult, NextPageContext } from 'next';
import { InitializeAtoms, updateInitialRecoilState } from '@atoms/index';
import { configAxios, useConfigAxios } from '@hooks/useAxiosConfig';
import axios from 'axios';
import DialogEntry from '@components/dialog_entry';
import { useMemo } from 'react';
import { SnackbarProvider } from 'notistack';
import Notification from '@components/notification';

const MainContent = (props: PaperProps<any>) => {
  const theme = useTheme();

  const snap = useRecoilSnapshot();

  return (
    <Paper
      {...props}
      sx={{flexGrow: 1, p: 3, ...props.sx, position: 'relative'}}
    >
      {props.children}
    </Paper>
  );
}

const AppLayout = ({Component, pageProps}: AppProps) => {
  const theme = useRecoilValue(ThemeState)
  useUpdateRoute();

  const SpaceBarDiv = styled('div')({
    ...theme.mixins.toolbar,
  })

  return (
    <ThemeProvider theme={theme}>
      <SnackbarProvider
        dense maxSnack={10} autoHideDuration={5000}
        anchorOrigin={{vertical: 'top', horizontal: 'right'}}
      >
        <MainMenu/>
        <div style={{paddingLeft: 240, display: 'flex', flexDirection: 'column', height: '100vh'}}>
          <MainBar/>
          <SpaceBarDiv/>
          <MainContent component="main" square>
            <Component {...pageProps}/>
          </MainContent>
        </div>
        <DialogEntry/>
        <Notification/>
      </SnackbarProvider>
    </ThemeProvider>
  );
}

export default function App(props: AppProps) {
  useConfigAxios();

  useMemo(() => {
    updateInitialRecoilState(props.pageProps.atom)
  }, [props.pageProps.atom]);

  return (
    <RecoilRoot>
      <AppLayout {...props} />
    </RecoilRoot>
  );
}

export const getCommonServerSideProps = async (context: NextPageContext): Promise<GetServerSidePropsResult<any>> => {
  configAxios(context);

  let isLogin = false;

  await axios.post(`/passport/user_check`, {},)
    .then(() => isLogin = true).catch((e) => console.log(e))

  return {
    props: {
      atom: {
        [InitializeAtoms.UserLogin]: isLogin
      }
    }
  }
}
