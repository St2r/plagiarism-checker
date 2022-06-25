import { GetServerSidePropsResult, NextPageContext } from 'next';
import { getCommonServerSideProps } from '../../_app';
import axios from 'axios';
import get from 'lodash/get';
import merge from 'lodash/merge';
import { InitializeAtoms } from '@atoms/index';
import AnalyseDetail from '@components/analyse-detail';
import { useEffect } from 'react';
import { useRouter } from 'next/router';
import { useRecoilState } from 'recoil';
import { AnalyseDetailState } from '@atoms/analyse/detail/analyse-detail';

export default function AnalyseDetailPage() {
  const aid = useRouter().query.aid;
  const [detail, setDetail] = useRecoilState(AnalyseDetailState);
  useEffect(() => {
    if (detail.analyse_id !== aid) {
      axios.get(`/analyse/detail/${aid}`)
        .then(res => setDetail(res.data.data))
        .catch(err => {
          console.log(err)
        })
    }
  }, [detail, setDetail, aid]);

  return (
    <AnalyseDetail/>
  )
}

export const getAnalyseDetailSP = async (context: NextPageContext): Promise<GetServerSidePropsResult<any>> => {
  const common = await getCommonServerSideProps(context);

  const aid = get(context, 'params.aid');
  const detail = await axios.get(`/analyse/detail/${aid}`)
    .then(res => res.data.data)
    .catch(err => {
      return null;
    })

  if (!detail) {
    return {
      notFound: true
    }
  }

  return merge(common, {
    props: {
      atom: {
        [InitializeAtoms.AnalyseDetail]: detail
      }
    }
  })
}

export const getServerSideProps = getAnalyseDetailSP