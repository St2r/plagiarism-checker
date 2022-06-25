"""
2022-03-28 22:59:15
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 0 ms | 1676 KB
Accepted | 1 * (4 / 10) | 1 ms | 1632 KB

"""

#include <stdio.h>
int main()
{
	int n,i=1;
	double e=1.0,s=1.0;
	scanf("%d",&n);
	while(i<=n&&i<=17)
	{
		s=s*i;
		e=e+1/s;
		i++;
	}
	printf("%.14lf",e);
	return 0;
}