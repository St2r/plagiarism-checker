import { GetServerSidePropsResult, NextPageContext } from 'next';
import { Box, Button, Typography } from '@mui/material';
import { useRouter } from 'next/router';
import { getCommonServerSideProps } from '../_app';
import { useRecoilValue } from 'recoil';
import { UserLoginStatus } from '@atoms/user/login';
import LoginForm from '@components/loginForm';

/**
 * 主页
 */
export default function HomePage() {
  const isLogin = useRecoilValue(UserLoginStatus);
  return (
    <>
      {!isLogin && <Login/>}
      {isLogin && <MainActions/>}
    </>
  );
}

const Login = () => {
  return (
    <LoginForm/>
  )
}

const MainActions = () => {
  const router = useRouter();

  const actionList: { title: string, onClick: () => void }[] = [
    {title: '新建分析', onClick: () => router.push('/analyse/new')},
    {title: '所有分析', onClick: () => router.push('/analyse/all')},
  ]

  return (
    <Box sx={{display: 'flex', width: '100%', maxWidth: '500px', justifyContent: 'space-evenly', m: 'auto'}}>
      {actionList.map(action => (
        <Button key={action.title} variant='outlined' sx={{width: 200, height: 200}} onClick={action.onClick}>
          <Typography variant={'h5'}>{action.title}</Typography>
        </Button>
      ))}
    </Box>
  )
}

export async function getServerSideProps(context: NextPageContext): Promise<GetServerSidePropsResult<any>> {
  return await getCommonServerSideProps(context);
}
