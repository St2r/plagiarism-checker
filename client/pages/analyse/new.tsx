import { Box, Button, ButtonGroup, Divider, IconButton, Step, StepLabel, Stepper } from '@mui/material';
import { GridColDef, GridRowsProp } from '@mui/x-data-grid';
import { useCallback, useState } from 'react';
import { KeyboardArrowDown, NavigateNext, Send } from '@mui/icons-material';
import Step1 from '@components/AnalyseCreate/Step1';
import Step2 from '@components/AnalyseCreate/Step2';
import Step3 from '@components/AnalyseCreate/Step3';
import { useRouter } from 'next/router';
import { GetServerSidePropsResult, NextPageContext } from 'next';
import { getCommonServerSideProps } from '../_app';

const steps = [
  {label: '填写基本信息'},
  {label: '添加数据源'},
  {label: '确认分析信息'},
]

export default function NewPage() {
  const [step, setStep] = useState(0);

  const onClickLast = useCallback(() => {
    setStep(raw => raw - 1)
  }, [setStep]);

  const onClickNext = useCallback(() => {
    setStep(raw => raw + 1)
  }, [setStep]);

  const router = useRouter();
  const onClickFinish = useCallback(() => {
    router.push('/todo');
  }, [router]);

  return (
    <>
      <Box sx={{height: 140, pt: 4}}>
        <Stepper activeStep={step} color={"primary"}>
          {steps.map((step, index) => (
            <Step key={index}>
              <StepLabel>{step.label}</StepLabel>
            </Step>
          ))}
        </Stepper>
        <Box sx={{mt: 5, display: 'flex', justifyContent: 'flex-end'}}>
          {step !== 0 && <Button sx={{mr: 3}} size="medium" color="secondary" onClick={onClickLast}>上一步</Button>}
          {step !== 2 && <Button
            endIcon={<NavigateNext/>} size="medium" variant="outlined"
            onClick={onClickNext}
          >
            下一步
          </Button>}
          {step === 2 && <Button
              size="medium" variant="outlined" endIcon={<Send/>} onClick={onClickFinish}
          >创建分析并运行</Button>}
        </Box>
      </Box>
      <Box sx={{height: 'calc(100% - 140px)', display: 'flex', flexDirection: 'column'}}>
        {step === 0 && <Step1/>}
        {step === 1 && <Step2/>}
        {step === 2 && <Step3/>}
      </Box>
    </>
  )
}

export async function getServerSideProps(context: NextPageContext): Promise<GetServerSidePropsResult<any>> {
  return await getCommonServerSideProps(context);
}