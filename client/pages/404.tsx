import { NextPage } from 'next';
import { useEffect } from 'react';
import { useRouter } from 'next/router';

const NotFound: NextPage = () => {
  const router = useRouter();

  useEffect(() => {
    router.replace('/home');
  });

  return null;
}

export default NotFound;
