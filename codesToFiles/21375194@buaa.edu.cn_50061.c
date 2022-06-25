"""
2022-03-28 20:38:50
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1736 KB
Accepted | 1 * (1 / 10) | 1 ms | 1692 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 0 ms | 1660 KB
Accepted | 1 * (4 / 10) | 1 ms | 1636 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	double sum=1,k=1;
	unsigned long long int i=0,n;
	scanf("%llu",&n);
	for(int i=1;i<=n&&i<=17;i++)
	{
		k=1;
		for(int j=1;j<=i;j++)
		{
			k*=(double)1/j;
		}
		sum+=k;
	}
	printf("%.14lf",sum);
}