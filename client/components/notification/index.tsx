import { useEffect } from 'react';
import axios from 'axios';
import useShowMessage from '@hooks/useMessage';

export default function Notification() {
  const showMessage = useShowMessage();

  useEffect(() => {
    const interval = setInterval(async () => {
      const res = await axios.get('/notification');
      res.data.data.forEach((item: any) => showMessage(item.type, item.content))
    }, 10_000);

    return () => clearInterval(interval);
  }, [showMessage]);
  return null
}