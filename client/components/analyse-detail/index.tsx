import React from 'react';
import { DataGrid, GridLinkOperator } from '@mui/x-data-grid';
import NoRows from '@components/material/datagrid/no-row';
import { columns } from '@components/analyse-detail/table/column';
import { useRecoilValue } from 'recoil';
import { AnalyseDetailLoadingState, AnalyseDetailState } from '@atoms/analyse/detail/analyse-detail';
import Toolbar from '@components/analyse-detail/table/toolbar';
import { AnalyseDetailCodeFilter } from '@atoms/analyse/detail/analyse-detail-code-filter';
import NoResults from '@components/material/datagrid/no-result';

export default function AnalyseDetail() {
  const detail = useRecoilValue(AnalyseDetailState);
  const filter = useRecoilValue(AnalyseDetailCodeFilter);
  const loading = useRecoilValue(AnalyseDetailLoadingState);

  return (
    <DataGrid
      columns={columns} rows={detail.codes}
      filterMode={'client'}
      loading={loading}
      filterModel={{
        items: [{
          id: 1, columnField: 'code_name', operatorValue: 'includes', value: filter.code_name,
        }],
        linkOperator: GridLinkOperator.And
      }}
      components={{
        NoRowsOverlay: NoRows,
        Toolbar: Toolbar,
        NoResultsOverlay: NoResults,
      }}
      autoPageSize
      getRowId={data => data.code_id}
    />
  );
}
