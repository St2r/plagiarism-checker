"""
2022-03-26 11:24:24
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1600 KB
Accepted | 1 * (1 / 10) | 14 ms | 1600 KB
Accepted | 1 * (2 / 10) | 11 ms | 1612 KB
Accepted | 1 * (2 / 10) | 14 ms | 1652 KB
Accepted | 1 * (4 / 10) | 14 ms | 1612 KB

"""

#include<stdio.h>

int main()
{
	int n;
	long long fac=1;
	double sum=1.0;
	int i,j;
	
	scanf("%d",&n);
	if(n>=17) n=17;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			fac*=j; 
		}
		sum=sum+1.0/fac;
		fac=1;
	}
	printf("%.14f\n",sum);
	return 0;
 }