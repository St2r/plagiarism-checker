import React from 'react';
import AllAnalysisTable from '@components/analyse-all';
import { GetServerSidePropsResult, NextPageContext } from 'next';
import { getCommonServerSideProps } from '../_app';
import axios from 'axios';
import merge from 'lodash/merge';
import { InitializeAtoms } from '@atoms/index';

export default function AllPage() {
  return (
    <>
      <AllAnalysisTable/>
    </>
  )
}

export async function getServerSideProps(context: NextPageContext): Promise<GetServerSidePropsResult<any>> {
  const common = await getCommonServerSideProps(context);

  const analysis = await axios.get('/analyse/list')
    .then(res => res.data.data)
    .catch(() => null)

  return merge(common, {
    props: {
      atom: {
        [InitializeAtoms.AllAnalysis]: analysis
      }
    }
  })
}