import AppendCodeDialog from '@components/analyse_detail/dialog/append_code/append_code';
import AppendIdDialog from '@components/analyse_detail/dialog/append_code/append_id';
import CodeDetail from '@components/analyse_detail/dialog/code_detail';
import DeleteCodeDialog from '@components/analyse_detail/dialog/delete_code';
import AppendCodeZipDialog from '@components/analyse_detail/dialog/append_code/append_code_zip';
import ReportDialog from '@components/analyse_detail/dialog/report/report';
import CodeDiffDialog from '@components/analyse_detail/dialog/code_diff';
import CodeGroup from '@components/analyse_detail/dialog/report/code_group';

export default function AnalyseDetailDialogs() {
  return (
    <>
      <AppendCodeDialog/>
      <AppendCodeZipDialog/>
      <AppendIdDialog/>

      <CodeDetail/>
      <DeleteCodeDialog/>

      <ReportDialog/>
      <CodeGroup/>
      <CodeDiffDialog/>
    </>
  )
}