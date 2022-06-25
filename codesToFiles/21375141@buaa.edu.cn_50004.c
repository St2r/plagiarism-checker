"""
2022-03-29 23:39:00
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1664 KB
Accepted | 1 * (1 / 10) | 1 ms | 1728 KB
Accepted | 1 * (2 / 10) | 1 ms | 1748 KB
Accepted | 1 * (2 / 10) | 1 ms | 1664 KB
Accepted | 1 * (4 / 10) | 1 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j;
	double a=1,e=1;
	scanf("%d",&n);
	if(n>20)
	{
		n=20;
	}
	for(i=1;i<=n;i++)
	{
		for(j=i;j>=1;j--)
		{
			a=a*j;
		}
		e=e+(1/a);
		a=1;
	}
	printf("%.14lf",e);
	return 0;
}