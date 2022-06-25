"""
2022-03-27 13:49:59
AC
1.0
Accepted | 1 * (1 / 8) | 3 ms | 1664 KB
Accepted | 1 * (1 / 8) | 6 ms | 1712 KB
Accepted | 1 * (1 / 8) | 21 ms | 1660 KB
Accepted | 1 * (1 / 8) | 15 ms | 1712 KB
Accepted | 1 * (1 / 8) | 20 ms | 1664 KB
Accepted | 1 * (1 / 8) | 2 ms | 1636 KB
Accepted | 1 * (1 / 8) | 2 ms | 1612 KB
Accepted | 1 * (1 / 8) | 2 ms | 1712 KB

"""

#include<stdio.h>
int main()
{
	int n;
	double e=1,m=1,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		m*=1/i;
		e+=m;
		if(i==17)
		break;
	}
	printf("%.14f",e);
	return 0;
}