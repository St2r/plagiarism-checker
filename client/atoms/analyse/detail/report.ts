import { atom } from 'recoil';

export const AnalyseReportState = atom<{ open: boolean }>({
  key: 'analyse-report-atom',
  default: {
    open: false
  }
})
