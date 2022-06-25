"""
2022-03-27 00:18:25
AC
1.0
Accepted | 1 * (1 / 10) | 7 ms | 1708 KB
Accepted | 1 * (1 / 10) | 2 ms | 1632 KB
Accepted | 1 * (2 / 10) | 2 ms | 1712 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (4 / 10) | 2 ms | 1684 KB

"""

#include<stdio.h>
int main()
{
	double i,s=1,k=1,n;
	scanf("%lf",&n);
	for(i=1;i<=n&&i<=100;i++)
	{
		k=(double)k*i;
		s=s+(double)1/k;
	}
	printf("%.14f",s);
	return 0;
}