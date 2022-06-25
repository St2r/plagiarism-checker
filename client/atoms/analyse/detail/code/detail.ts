import { atom, useSetRecoilState } from 'recoil';
import { ICode } from '@atoms/analyse/all/all_analyse';
import { useCallback } from 'react';
import axios from 'axios';
import useShowMessage from '@hooks/useMessage';

export const CodeDetailState = atom<Partial<ICode> & { open: boolean }>({
  key: 'code-state',
  default: {open: false},
})

export const useOpenCodeDetail = () => {
  const setCodeDetailState = useSetRecoilState(CodeDetailState);
  const showMessage = useShowMessage();
  return useCallback(async (codeId: string) => {

    await axios.post('/code/detail', {
      codeId,
    }).then(res => {
      setCodeDetailState({...res.data.data, open: true})
    }).catch((e) => {
      console.log(e)
      showMessage('error', '获取代码内容失败')
    })
  }, [setCodeDetailState, showMessage])
}