"""
2022-03-26 09:32:07
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1672 KB
Accepted | 1 * (1 / 10) | 12 ms | 1592 KB
Accepted | 1 * (2 / 10) | 19 ms | 1716 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (4 / 10) | 14 ms | 1656 KB

"""

#include <stdio.h>
int main()
{
	int n;
	double mul=1;
	double sum=0;
	scanf("%d", &n);
	if(n>100)
	{
		n=100;
	}
	for(int i=0; i<=n; i++)
	{
		if(i>0)
		{
			mul*=1.0/i;
		}
		sum+=mul;
	}
	printf("%.14f", sum);
	return 0;
}