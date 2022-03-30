import React from 'react';
import AllAnalysisTable from '@components/analyseAll';
import { GetServerSidePropsResult, NextPageContext } from 'next';
import { getCommonServerSideProps } from '../_app';

export default function AllPage() {
  return (
    <AllAnalysisTable/>
  )
}

export async function getServerSideProps(context: NextPageContext): Promise<GetServerSidePropsResult<any>> {
  return await getCommonServerSideProps(context);
}