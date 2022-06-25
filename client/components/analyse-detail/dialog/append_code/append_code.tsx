import React, { useCallback, useMemo, useState } from 'react';
import {
  Button,
  Dialog,
  DialogActions,
  DialogContent,
  DialogTitle,
  FormControl, FormHelperText,
  InputLabel, OutlinedInput,
} from '@mui/material';
import { useRecoilState, useSetRecoilState } from 'recoil';
import { AddByCodeState } from '@atoms/analyse/detail/code/add_by_code';
import axios from 'axios';
import useShowMessage from '@hooks/useMessage';
import { AnalyseDetailState } from '@atoms/analyse/detail/analyse-detail';
import { LoadingButton } from '@mui/lab';

export default function AppendCodeDialog() {
  const [state, setState] = useRecoilState(AddByCodeState);

  // 标题
  const [name, setName] = useState('');
  const nameError = useMemo(() =>
    name.length === 0 || name.length > 12, [name]);
  const nameErrorTip = '标题长度在0-12之间'

  // 代码
  const [code, setCode] = useState('');
  const codeError = useMemo(() =>
    code.length === 0 || code.length > 2000, [code]);
  const codeErrorTip = '代码长度在0-2000之间'

  const close = useCallback(() => {
    setState(raw => ({
      ...raw, open: false
    }));
    setName('')
    setCode('')
  }, [setState]);

  const [loading, onClickConfirm] = useAppendCodeFetch(name, code, state.analyseId, close)

  return (
    <Dialog open={state.open} onBackdropClick={close} fullWidth>
      <DialogTitle>输入提交的代码内容</DialogTitle>
      <DialogContent>
        <FormControl margin={'dense'} error={nameError}>
          <InputLabel>标题</InputLabel>
          <OutlinedInput
            label={'标题'} autoFocus type={'text'}
            value={name} onChange={e => setName(e.target.value)}
          />
          {nameError && <FormHelperText>{nameErrorTip}</FormHelperText>}
        </FormControl>
        <FormControl margin={'dense'} fullWidth error={codeError}>
          <InputLabel>代码</InputLabel>
          <OutlinedInput
            label={'代码'} autoFocus type={'text'}
            multiline minRows={3} maxRows={10} sx={{fontFamily: 'monospace'}}
            value={code} onChange={e => setCode(e.target.value)}
          />
          {codeError && <FormHelperText>{codeErrorTip}</FormHelperText>}
        </FormControl>
      </DialogContent>
      <DialogActions>
        <Button color="secondary" onClick={close}>取消</Button>
        <LoadingButton
          variant='outlined' disabled={nameError || codeError} loading={loading}
          onClick={onClickConfirm}>提交</LoadingButton>
      </DialogActions>
    </Dialog>
  )
}

const useAppendCodeFetch = (name: string, code: string, analyseId: string, close: () => void):
  [boolean, () => void] => {
  const [loading, setLoading] = useState(false);
  const showMessage = useShowMessage();
  const setDetail = useSetRecoilState(AnalyseDetailState);

  const callback = useCallback(async () => {
    setLoading(true)
    await axios.post('/code/add', {
      analyse_id: analyseId,
      name,
      code,
      source: '单文件'
    }).then(res => {
      setDetail(raw => ({
        ...raw,
        codes: [...raw.codes, res.data.data]
      }));
      showMessage('success', '添加成功')
      close()
    })
      .catch(() => {
        showMessage('error', '添加失败')
        return null
      })
    setLoading(false);
  }, [analyseId, name, code, setDetail, showMessage, close]);

  return [loading, callback]
}