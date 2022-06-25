"""
2022-03-29 23:26:31
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (1 / 10) | 0 ms | 1676 KB
Accepted | 1 * (2 / 10) | 1 ms | 1676 KB
Accepted | 1 * (2 / 10) | 1 ms | 1664 KB
Accepted | 1 * (4 / 10) | 1 ms | 1684 KB

"""

#include<stdio.h>
int main()
{
	int n,i;
	double di=1,e=1;
	scanf("%d",&n);
	for(i=1;i<=n && i<=17;i++)
	{
		di=di*i;
		e=e+1/di;
	}
	printf("%.14f",e);
	return 0;
}