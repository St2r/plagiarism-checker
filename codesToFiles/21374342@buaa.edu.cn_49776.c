"""
2022-03-26 14:10:21
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (1 / 10) | 3 ms | 1604 KB
Accepted | 1 * (2 / 10) | 2 ms | 1620 KB
Accepted | 1 * (2 / 10) | 3 ms | 1704 KB
Accepted | 1 * (4 / 10) | 3 ms | 1668 KB

"""

#include <stdio.h>
int main()
{
	int n,i=1,a;
	double e=1,m;
	scanf("%d",&n);
	while(i<=n&&i<=17)
	{
		a=i, m=1;
		while(a>0)
		{
			m=m*a;
			a--;
		}
		e=e+1/m;
		i++;
	}
	printf("%.14lf",e);
	return 0;
}