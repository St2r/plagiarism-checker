import { AtomEffect, RecoilState } from 'recoil';

export enum InitializeAtoms {
  UserLogin,
  AllAnalysis,
  AnalyseDetail,
  AnalyseDetailResult,
}

let initialRecoilState: any = null
export const updateInitialRecoilState = (data: any) => {
  initialRecoilState = data
}

export const initialEffect = (key: InitializeAtoms): AtomEffect<any> => ({setSelf}) => {
  if (
    initialRecoilState != null
    && initialRecoilState[key] != undefined
    && initialRecoilState[key] != null
  ) {
    setSelf(initialRecoilState[key])
  }
}