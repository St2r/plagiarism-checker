"""
2022-03-27 10:05:38
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1676 KB
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (2 / 10) | 2 ms | 1664 KB
Accepted | 1 * (2 / 10) | 2 ms | 1680 KB
Accepted | 1 * (4 / 10) | 2 ms | 1656 KB

"""

#include<stdio.h>

int main()
{
	long long n,i,cheng=1;
	scanf("%lld",&n);
	double esp=1e-15 ,sum=1; 
	for(i=1;i<=n;i++)
	{
		cheng=cheng*i;
		sum=sum+(double)1/cheng;
		if((double)1/cheng<esp)
			break;
	}
	printf("%.14lf",sum);
	return 0; 
}