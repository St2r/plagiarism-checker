import { useCallback, useState } from 'react';
import axios from 'axios';
import { useShowMessage } from '@atoms/layout/message';

export const useNewFetch = (title: string, desc: string, close: () => void):
  { onConfirm: () => void, loading: boolean } => {

  const [loading, setLoading] = useState(false);
  const showMessage = useShowMessage();

  const onConfirm = useCallback(() => {
    axios.post('/analyse/create', {
      analyse_name: title,
      description: desc,
    })
      .then(res => {
        showMessage('success', res.data.message);
      })
      .catch(err => {
        showMessage('success', err?.data?.message);
      })
  }, [title, desc, showMessage]);

  return {
    onConfirm,
    loading,
  }
}