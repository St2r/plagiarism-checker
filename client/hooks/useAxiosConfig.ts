import axios from 'axios';
import { useEffect } from 'react';
import { NextPageContext } from 'next';

export const configAxios = (context?: NextPageContext) => {
  axios.defaults.baseURL = 'http://47.95.38.21/api'
  axios.defaults.withCredentials = true
  if (process.env.NODE_ENV === "development") {
    // charles proxy
    axios.defaults.baseURL = 'http://localhost:8080/api'
    // axios.defaults.proxy = {
    //   host: '127.0.0.1',
    //   port: 8888,
    // }
  }
  if (context?.req?.headers?.cookie) {
    axios.defaults.headers.common = {
      "Cookie": context.req.headers.cookie,
    }
  }
}

export const useConfigAxios = () => {
  useEffect(configAxios,[]);
}