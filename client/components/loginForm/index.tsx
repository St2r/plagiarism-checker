import React, { useCallback, useState } from 'react';
import {
  Button,
  Card,
  CardActions,
  CardContent, FormControl,
  InputLabel,
  OutlinedInput
} from '@mui/material';
import axios from 'axios';
import { useSetRecoilState } from 'recoil';
import { UserLoginStatus } from '@atoms/user/login';
import { LoadingButton } from '@mui/lab';
import Cookies from 'js-cookie';
import { get } from 'lodash';

export default function LoginForm() {
  const [username, setUsername] = useState('');
  const [password, setPassword] = useState('');
  const setUserLogin = useSetRecoilState(UserLoginStatus);
  const [loading, setLoading] = useState(false);

  const valid = username.length && password.length

  const onClickConfirm = useCallback(async () => {
    setLoading(true)
    let loginSuccess = false;
    axios.post('/passport/login', {user_id: username, password})
      .then(res => {
        loginSuccess = true;
        Cookies.set('x-token', get(res, 'data.data.token'));
      })
      .catch()
      .finally(() => {
        setLoading(false);
      })
    setUserLogin(loginSuccess);
  }, [username, password, setUserLogin]);

  return (
    <Card sx={{width: 400, p: 3, borderRadius: 4}} variant={'outlined'}>
      <CardContent component={'form'} sx={{display: 'flex', flexDirection: 'column'}}>
        <FormControl margin={'dense'}>
          <InputLabel>用户名</InputLabel>
          <OutlinedInput
            label={'用户名'}
            value={username} onChange={e => setUsername(e.target.value)}
          />
        </FormControl>
        <FormControl margin={'dense'} error>
          <InputLabel>密码</InputLabel>
          <OutlinedInput
            label={'密码'} type={'password'} autoComplete='on'
            value={password} onChange={e => setPassword(e.target.value)}
          />
        </FormControl>
      </CardContent>
      <CardActions>
        <LoadingButton loading={loading} disabled={!valid} onClick={onClickConfirm}>登陆</LoadingButton>
      </CardActions>
    </Card>
  )
}