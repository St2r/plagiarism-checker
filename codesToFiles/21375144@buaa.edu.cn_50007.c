"""
2022-03-26 14:15:31
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1668 KB
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1664 KB
Accepted | 1 * (4 / 10) | 2 ms | 1708 KB

"""

#include<stdio.h>

int main()
{
	double e,n,c=0,d=1,i;
	scanf("%lf",&n);
	if(n<=16)
	{
		for(i=1;i<=n;i++)
		{
			d=d*i;
			c=c+1/(d);
		}
		e=1+c;
		printf("%.14lf",e);
	}if(n>16)
	{
		printf("2.71828182845905");
	}
	return 0;
}