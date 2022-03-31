import AppendCodeDialog from '@components/analyse_detail/dialog/append_code';
import AppendIdDialog from '@components/analyse_detail/dialog/append_id';
import CodeDetail from '@components/analyse_detail/dialog/code_detail';
import DeleteCodeDialog from '@components/analyse_detail/dialog/delete_code';

export default function AnalyseDetailDialogs() {
  return (
    <>
      <AppendCodeDialog/>
      <AppendIdDialog/>

      <CodeDetail/>
      <DeleteCodeDialog/>
    </>
  )
}