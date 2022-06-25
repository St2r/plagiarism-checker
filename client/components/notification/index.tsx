import { useEffect } from 'react';
import axios from 'axios';
import useShowMessage from '@hooks/useMessage';
import useAnalyseMessage from '@hooks/useAnalyseMessage';

/**
 * render nothing
 *
 * just mount notifications
 */
export default function Notification() {
  const showMessage = useShowMessage();
  const showAnalyseResult = useAnalyseMessage();

  useEffect(() => {
    const interval = setInterval(async () => {
      try {
        const res = await axios.get('/notification');
        console.log(res.data.data);
        res.data.data.forEach((item: any) => {
          if (item.analyse_id) {
            showAnalyseResult(item.analyse_id, item.analyse_name)
          }
          if (item.content) {
            showMessage(item.type, item.content)
          }
        })
      } catch (e) {
        console.warn(e)
      }
    }, 10_000);

    return () => clearInterval(interval);
  }, [showMessage]);

  return null
}