import AnalyseNewDialog from '@components/analyse_new';
import MessageAlert from '@components/message_alart';
import AnalysePreviewDialog from '@components/analyse_all/dialogs/detail';
import AnalyseDetailDialogs from '@components/analyse_detail/dialog';
import AnalyseDeleteDialog from '@components/analyse_all/dialogs/delete';

export default function DialogEntry() {
  return (
    <>
      <MessageAlert/>
      <AnalyseNewDialog/>
      <AnalysePreviewDialog/>
      <AnalyseDetailDialogs/>
      <AnalyseDeleteDialog/>
    </>
  )
}