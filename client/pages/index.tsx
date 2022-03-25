import type { NextPage } from 'next'
import Head from 'next/head'
import Image from 'next/image'
import styles from '../styles/Home.module.css'
import { atom, useRecoilValue } from 'recoil';

const testAtom = atom({
  key: 'test',
  default: true,
})

const Home: NextPage = () => {
  const i = useRecoilValue(testAtom);

  console.log(i);

  return (
    <div className={styles.container}>
      <div>Main</div>

      <footer className={styles.footer}>
        <a
          href="https://vercel.com?utm_source=create-next-app&utm_medium=default-template&utm_campaign=create-next-app"
          target="_blank"
          rel="noopener noreferrer"
        >
          Powered by{' '}
          <span className={styles.logo}>
            <Image src="/vercel.svg" alt="Vercel Logo" width={72} height={16} />
          </span>
        </a>
      </footer>
    </div>
  )
}

export default Home
