import React from 'react';
import { DataGrid } from '@mui/x-data-grid';
import DetailDail from '@components/analyse_detail/component/dail';
import NoRows from '@components/material/datagrid/empty';
import { columns } from '@components/analyse_detail/table/column';
import { useRecoilValue } from 'recoil';
import { AnalyseDetailState } from '@atoms/analyse/detail/analyse_detail';
import Toolbar from '@components/analyse_detail/table/component/toolbar';

export default function AnalyseDetail() {
  const detail = useRecoilValue(AnalyseDetailState);

  console.log('>>', detail);

  return (
    <>
      <DataGrid
        columns={columns} rows={detail.codes}
        hideFooter
        components={{
          NoRowsOverlay: NoRows,
          Toolbar: Toolbar,
        }}
        getRowId={data => data.analyse_id}
      />
      <DetailDail/>
    </>
  );
}
