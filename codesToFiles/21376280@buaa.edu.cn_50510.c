"""
2022-03-26 23:17:12
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1624 KB
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (4 / 10) | 231 ms | 1700 KB

"""

#include<stdio.h>
int main()
{
	long n,i,j;
	double sum=1,per=1;
	scanf("%lld",&n);
	
	
	if(n<10000){
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			per=per/j;
		}
		
		sum+=per;
		per=1;
	}
     }
     if(n>=10000){
	for(i=1;i<=10000;i++)
	{
		for(j=1;j<=i;j++)
		{
			per=per/j;
		}
		
		sum+=per;
		per=1;
	}
     }
	printf("%.14lf",sum);
	return 0;
}