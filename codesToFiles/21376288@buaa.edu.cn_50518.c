"""
2022-03-29 20:04:08
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (1 / 10) | 1 ms | 1652 KB
Accepted | 1 * (2 / 10) | 0 ms | 1636 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (4 / 10) | 1 ms | 1656 KB

"""

#include<stdio.h>
long long fac(int y);
int main()
{
	int n,i;
	double sum=1;
	scanf("%d",&n);
	for(i=1;i<=n&&i<=20;i++)
	{
		sum += 1.0/fac(i);
	}
	printf("%.14lf",sum);
	return 0;
}
long long fac(int y)
{
	int j;
	long long fac=1;
	for(j=1;j<=y;j++)
	{
		fac = fac*j;	
	}
	return fac;
}