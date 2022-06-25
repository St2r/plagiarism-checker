"""
2022-03-26 12:50:30
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1712 KB
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 4 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (4 / 10) | 2 ms | 1608 KB

"""

#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	double e = 1.0;
	int i = 0;
	int x;
	for(i = 0 ;i <= n - 1;i++)
	{
		int k = 1;
		x=1;
		for(k = 1;k <= i+1;k++)
		{
			x*=k;
		}
		e += 1.0/(double)x;
	}
	printf("%.14lf",e);
	return 0;
}