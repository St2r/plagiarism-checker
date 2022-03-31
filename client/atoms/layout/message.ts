import { atom, useSetRecoilState } from 'recoil';
import { useCallback } from 'react';

type TMessageType = 'success' | 'info' | 'warning' | 'error'

export const MessageState = atom<{
  open: boolean,
  type: TMessageType,
  message: string,
}>({
  key: 'message-open',
  default: {
    open: false,
    type: 'info',
    message: 'message'
  }
})

export const useShowMessage = () => {
  const setMessageState = useSetRecoilState(MessageState);

  return useCallback((type: TMessageType, message: string) => {
    setMessageState({
      open: true,
      type,
      message,
    })
  }, [setMessageState])
}
