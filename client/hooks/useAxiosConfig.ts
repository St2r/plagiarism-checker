import axios from 'axios';
import { useEffect } from 'react';
import { NextPageContext } from 'next';

export const configAxios = (context?: NextPageContext) => {
  axios.defaults.baseURL = 'http://localhost.charlesproxy.com/api'
  axios.defaults.withCredentials = true
  axios.defaults.proxy = {
    host: '127.0.0.1',
    port: 8888,
  }
  axios.defaults.headers.common = {
    "Cookie": context?.req?.headers?.cookie ?? '',
  }
}

export const useConfigAxios = () => {
  useEffect(configAxios,[]);
}