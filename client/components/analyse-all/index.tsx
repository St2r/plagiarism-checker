import React from 'react';
import { DataGrid } from '@mui/x-data-grid';
import { column } from './table/column';
import { useRecoilValue } from 'recoil';
import { AllAnalyseState } from '@atoms/analyse/all/all_analyse';
import Toolbar from '@components/analyse-all/table/components/toolbar';

export default function AllAnalysisTable() {
  const data = useRecoilValue(AllAnalyseState);

  return (
    <DataGrid
      columns={column} rows={data} hideFooter
      getRowId={item => item.analyse_id} components={{Toolbar: Toolbar}}
    />
  )
}