import AnalyseNewDialog from '@components/analyse-new';
import AnalysePreviewDialog from '@components/analyse-all/dialogs/detail';
import AnalyseDetailDialogs from '@components/analyse-detail/dialog';
import AnalyseDeleteDialog from '@components/analyse-all/dialogs/delete';
import ResultCompareDialog from '@components/analyse-result/result-compare';

export default function DialogEntry() {
  return (
    <>
      <AnalyseNewDialog/>
      <AnalysePreviewDialog/>
      <AnalyseDetailDialogs/>
      <AnalyseDeleteDialog/>

      <ResultCompareDialog/>
    </>
  )
}