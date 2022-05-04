"""
2022-03-29 20:32:00
WA
0.0
Wrong Answer | 0 * (5 / 100) | 1 ms | 1484 KB
Wrong Answer | 0 * (35 / 100) | 2 ms | 1532 KB
Wrong Answer | 0 * (60 / 100) | 2 ms | 1584 KB

"""

#include<stdio.h>
int main(void)
{
	int a;
	int pri[25]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
	int tmp[25],tmp2;
	int b[15];
	int i,j,k;
	int num;
	while(~scanf("%d",&a))
	{
	for(i=0;i<25;i++)
	tmp[i]=0;
		for(i=0;i<25;i++)
		{
	
			while(a%pri[i]==0)
			{
				a=a/pri[i];
				tmp[i]++;
			}
		}
		for(i=0,num=0;i<25;i++)
		num=num+tmp[i];
		for(i=0,tmp2=0;i<25;i++)
		{
			for(j=tmp2;j<tmp2+tmp[i];j++)
			b[j]=pri[i];
			tmp2=tmp2+tmp[i];
		}
	    
	}
}