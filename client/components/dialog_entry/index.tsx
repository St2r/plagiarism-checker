import AnalyseNewDialog from '@components/analyse_new';
import AnalysePreviewDialog from '@components/analyse_all/dialogs/detail';
import AnalyseDetailDialogs from '@components/analyse_detail/dialog';
import AnalyseDeleteDialog from '@components/analyse_all/dialogs/delete';

export default function DialogEntry() {
  return (
    <>
      <AnalyseNewDialog/>
      <AnalysePreviewDialog/>
      <AnalyseDetailDialogs/>
      <AnalyseDeleteDialog/>
    </>
  )
}