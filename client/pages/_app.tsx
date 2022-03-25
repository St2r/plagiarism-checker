import '../styles/globals.css'
import type { AppProps } from 'next/app'
import { RecoilRoot, useRecoilValue } from 'recoil';
import { Paper, ThemeProvider, useTheme } from '@mui/material';
import MainMenu from '@components/mainMenu';
import MainBar from '@components/main-bar';
import { ThemeState } from '@atoms/layout/theme';
import { PaperProps} from '@mui/material/Paper/Paper';
import { useUpdateRoute } from '@atoms/layout/route';

const MainContent = (props: PaperProps<any>) => {
  const theme = useTheme();
  return (
    <Paper
      {...props}
      sx={{height: `calc(100vh - ${theme.mixins.toolbar.minHeight}px)`, p: 3, ...props.sx}}
    >
      {props.children}
    </Paper>
  );
}

const AppLayout = ({Component, pageProps}: AppProps) => {
  const theme = useRecoilValue(ThemeState)
  useUpdateRoute();

  return (
    <ThemeProvider theme={theme}>
      <MainMenu/>
      <div style={{paddingLeft: 240}}>
        <MainBar/>
        <MainContent component="main" square>
          <Component {...pageProps}/>
        </MainContent>
      </div>
    </ThemeProvider>
  );
}

export default function App(props: AppProps) {
  return (
    <RecoilRoot initializeState={() => {
      console.log('>>>> initialize atom')
    }}>
      <AppLayout {...props} />
    </RecoilRoot>
  );
}
