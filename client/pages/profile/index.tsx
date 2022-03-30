import { GetServerSidePropsResult, NextPageContext } from 'next';
import { getCommonServerSideProps } from '../_app';
import { merge } from 'lodash';

export default function ProfilePage() {
  return (
    <div>Profile</div>
  )
}

export async function getServerSideProps(context: NextPageContext): Promise<GetServerSidePropsResult<any>> {
  return await getCommonServerSideProps(context);
}
