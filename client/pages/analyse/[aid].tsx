import { GetServerSidePropsResult, NextPageContext } from 'next';
import { getCommonServerSideProps } from '../_app';
import axios from 'axios';
import { get, merge } from 'lodash';
import { InitializeAtoms, updateInitialRecoilState } from '@atoms/index';
import AnalyseDetail from '@components/analyse_detail';
import { useEffect } from 'react';
import { useRouter } from 'next/router';
import { useRecoilState } from 'recoil';
import { AnalyseDetailState } from '@atoms/analyse/detail/analyse_detail';

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

export async function getServerSideProps(context: NextPageContext): Promise<GetServerSidePropsResult<any>> {
  const common = await getCommonServerSideProps(context);

  const aid = get(context, 'params.aid');
  const detail = await axios.get(`/analyse/detail/${aid}`)
    .then(res => res.data.data)
    .catch(err => {
      console.log(err);
      return null
    })

  return merge(common, {
    props: {
      atom: {
        [InitializeAtoms.AnalyseDetail]: detail
      }
    }
  })
}