import { useCallback, useState } from 'react';
import axios from 'axios';
import { useShowMessage } from '@atoms/layout/message';
import { useSetRecoilState } from 'recoil';
import { AllAnalyseState } from '@atoms/analyse/all/all_analyse';

export const useNewFetch = (title: string, desc: string, close: () => void):
  { onConfirm: () => void, loading: boolean } => {

  const [loading, setLoading] = useState(false);
  const showMessage = useShowMessage();
  const setAllAnalyse = useSetRecoilState(AllAnalyseState);

  const onConfirm = useCallback(() => {
    setLoading(true)
    axios.post('/analyse/create', {
      analyse_name: title,
      description: desc,
    })
      .then(res => {
        showMessage('success', res.data.message);
        setAllAnalyse(raw => [...raw, res.data.data]);
        close();
      })
      .catch(err => {
        showMessage('success', err?.data?.message);
      })
    setLoading(false);
  }, [title, desc, showMessage, setLoading]);

  return {
    onConfirm,
    loading,
  }
}