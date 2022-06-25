"""
2022-03-26 12:05:17
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1580 KB
Accepted | 1 * (1 / 10) | 14 ms | 1572 KB
Accepted | 1 * (2 / 10) | 2 ms | 1572 KB
Accepted | 1 * (2 / 10) | 18 ms | 1664 KB
Accepted | 1 * (4 / 10) | 2 ms | 1608 KB

"""

#include <stdio.h>
int main()
{
	int n,i,j;
	double e=1.0,x=1.0;
	scanf("%d",&n);
	if(n>20)
	{
		printf("2.71828182845905");
		return 0;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			x/=(1.0*j);
		}
		e+=x;
		x=1.0;
	}
	printf("%.14lf",e);
	return 0;
}