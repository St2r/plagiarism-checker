import { GetServerSidePropsResult, NextPage, NextPageContext } from 'next';
import { getCommonServerSideProps } from './_app';

const NotFound: NextPage = () => {
  return (
    <div>404</div>
  );
}

export default NotFound;

export async function getServerSideProps(context: NextPageContext): Promise<GetServerSidePropsResult<any>> {
  return await getCommonServerSideProps(context);
}
