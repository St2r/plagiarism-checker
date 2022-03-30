import type { AppProps } from 'next/app'
import { MutableSnapshot, RecoilRoot, useRecoilValue } from 'recoil';
import { Paper, styled, ThemeProvider, useTheme } from '@mui/material';
import MainMenu from '@components/mainMenu';
import MainBar from '@components/main-bar';
import { ThemeState } from '@atoms/layout/theme';
import { PaperProps } from '@mui/material/Paper/Paper';
import { useUpdateRoute } from '@atoms/layout/route';
import { GetServerSidePropsResult, NextPageContext } from 'next';
import { InitializeAtoms, InitializeAtomsMap } from '@atoms/index';
import { configAxios, useConfigAxios } from '@hooks/useAxiosConfig';
import axios from 'axios';
import '../styles/globals.css'

const MainContent = (props: PaperProps<any>) => {
  const theme = useTheme();
  return (
    <Paper
      {...props}
      sx={{flexGrow: 1, p: 3, ...props.sx}}
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
      <MainMenu/>
      <div style={{paddingLeft: 240, display: 'flex', flexDirection: 'column', height: '100vh'}}>
        <MainBar/>
        <SpaceBarDiv/>
        <MainContent component="main" square>
          <Component {...pageProps}/>
        </MainContent>
      </div>
    </ThemeProvider>
  );
}

export default function App(props: AppProps) {
  useConfigAxios();

  return (
    <RecoilRoot initializeState={({set}: MutableSnapshot) => {
      const atom: Record<InitializeAtoms, any> = props.pageProps.atom
      for (const k in atom) {
        const key = k as unknown as InitializeAtoms
        set(InitializeAtomsMap[key], atom[key])
      }
    }}>
      <AppLayout {...props} />
    </RecoilRoot>
  );
}

export const getCommonServerSideProps = async (context: NextPageContext): Promise<GetServerSidePropsResult<any>> => {
  configAxios();

  let isLogin = false;

  await axios.post(`/passport/user_check`, {}, {
    headers: {
      "Cookie": context.req?.headers?.cookie ?? '',
    }
  }).then(() => isLogin = true).catch((e) => console.log(e))

  return {
    props: {
      atom: {
        [InitializeAtoms.UserLogin]: isLogin
      }
    }
  }
}
