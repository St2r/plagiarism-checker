import AppendCodeDialog from '@components/analyse-detail/dialog/append_code/append_code';
import AppendIdDialog from '@components/analyse-detail/dialog/append_code/append_id';
import CodeDetail from '@components/analyse-detail/dialog/code_detail';
import DeleteCodeDialog from '@components/analyse-detail/dialog/delete_code';
import AppendCodeZipDialog from '@components/analyse-detail/dialog/append_code/append_code_zip';
import CodeGroup from '@components/analyse-detail/dialog/report/code_group';

export default function AnalyseDetailDialogs() {
  return (
    <>
      <AppendCodeDialog/>
      <AppendCodeZipDialog/>
      <AppendIdDialog/>

      <CodeDetail/>
      <DeleteCodeDialog/>

      <CodeGroup/>
    </>
  )
}