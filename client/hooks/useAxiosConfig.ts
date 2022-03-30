import axios from 'axios';
import { useEffect } from 'react';

export const configAxios = () => {
  axios.defaults.baseURL = 'http://localhost.charlesproxy.com/api'
  axios.defaults.withCredentials = true
  axios.defaults.proxy = {
    host: '127.0.0.1',
    port: 8888,
  }
}

export const useConfigAxios = () => {
  useEffect(configAxios,[]);
}