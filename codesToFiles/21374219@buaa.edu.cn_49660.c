"""
2022-03-26 16:57:30
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1716 KB
Accepted | 1 * (1 / 10) | 15 ms | 1696 KB
Accepted | 1 * (2 / 10) | 2 ms | 1640 KB
Accepted | 1 * (2 / 10) | 13 ms | 1716 KB
Accepted | 1 * (4 / 10) | 14 ms | 1560 KB

"""

#include <stdio.h>
int main()
{
	long long n;
	scanf("%lld",&n);
	long long i=0,k=0,m=1;
	double j=1;
	double a[1000]={0};
	if(n<17)
	{
	for(i=0;i<n;i++)
	{
		for(j=1;j<i+2;j++)
		{
			m=m*j;
		}
		a[i]=m;
		m=1;
	}
	double e=1;
	for(k=0;k<n;k++)
	{
		e=e+1.0/a[k];
	}
	printf("%.14f",e);
    }
    else
    {
    	printf("2.71828182845905");
	}
    return 0;
}