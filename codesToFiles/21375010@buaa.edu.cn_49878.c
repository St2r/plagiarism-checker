"""
2022-03-28 17:36:33
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1624 KB
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1660 KB
Accepted | 1 * (4 / 10) | 2 ms | 1652 KB

"""

#include<stdio.h>
int main()
{
	long long unsigned int n,i,p=1;
	double e=1;
	scanf("%llu",&n);
	for(i=1;i<=n&&i<=18;i++)
	{
		p*=i;
		e+=1/((double)p);
	}
	printf("%.14lf",e);
	return 0;
}