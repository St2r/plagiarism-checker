"""
2022-03-26 18:57:54
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (1 / 10) | 2 ms | 1620 KB
Accepted | 1 * (2 / 10) | 2 ms | 1664 KB
Accepted | 1 * (2 / 10) | 2 ms | 1716 KB
Accepted | 1 * (4 / 10) | 5 ms | 1668 KB

"""

#include <stdio.h>

int main()
{
	int n,i;
	double eps=1e-14,d,e=1;
	scanf("%d",&n);
	
	for(i=1,d=1;i<=n&&d>=eps;i++)
	{
	   	d/=i;
	   	e+=d;
	}
	
	printf("%.14f",e);
	
	return 0;
}