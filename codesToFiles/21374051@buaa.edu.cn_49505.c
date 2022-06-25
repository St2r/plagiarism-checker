"""
2022-03-26 23:34:52
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (1 / 10) | 2 ms | 1688 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (4 / 10) | 2 ms | 1716 KB

"""

#include <stdio.h>

int main()
{
	int n;
	double sum=1;
	double ai=1;
	int i=1;
	scanf("%d",&n);
	if(n>20)
	{
		n=20;
	}
	for(i=1;i<=n;i++)
	{
		ai=(double)ai/i;
		sum+=ai;
	}
	printf("%.14f",sum);
	return 0;
}