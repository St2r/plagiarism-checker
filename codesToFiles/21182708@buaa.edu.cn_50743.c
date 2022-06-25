"""
2022-03-29 23:33:10
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1720 KB
Accepted | 1 * (1 / 10) | 1 ms | 1692 KB
Accepted | 1 * (2 / 10) | 1 ms | 1740 KB
Accepted | 1 * (2 / 10) | 1 ms | 1716 KB
Accepted | 1 * (4 / 10) | 1 ms | 1664 KB

"""

#include<stdio.h>
int main()
{
	int n, i=1;
	scanf("%d", &n);
	double eps=1e-14, en=0, e=1;
	long long m=1;
	for(i=1; i<=n; i++)
	{
		m=m*i;
		en=1.0/m;
		e=e+en;
		if(en-eps<0)
		{
			printf("%.14lf", e);
			return 0;
		}
		
	}
	printf("%.14lf", e);
	return 0;
}