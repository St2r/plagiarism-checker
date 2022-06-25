"""
2022-03-27 19:01:16
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1704 KB
Accepted | 1 * (35 / 100) | 2 ms | 1472 KB
Accepted | 1 * (60 / 100) | 8 ms | 1692 KB

"""

#include<stdio.h>
int main ()
{
	int n;
	long long x=1;
	scanf("%d",&n);
	double e=1.0;
	if (n>33) n=33;
	for (int i=1;i<=n;i++)
	{
		x*=i;
		e+=1.0/x;
	}
	printf("%.14lf",e);
	return 0;
}