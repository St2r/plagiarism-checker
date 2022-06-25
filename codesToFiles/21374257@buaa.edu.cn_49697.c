"""
2022-03-29 14:06:02
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (1 / 10) | 0 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (4 / 10) | 1 ms | 1660 KB

"""

#include<stdio.h>
int main()
{	int n,i;
	scanf("%d",&n);
	double e=1,a=1;
	for(i=1;i<=n&&i<=17;i++)
	{	a*=i;
		e+=(1.0/a);
	}
	printf("%.14lf",e);
}