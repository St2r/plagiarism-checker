"""
2022-03-28 22:18:19
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1664 KB
Accepted | 1 * (1 / 10) | 0 ms | 1632 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1740 KB
Accepted | 1 * (4 / 10) | 1 ms | 1712 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j,m;
	long long d=1;
	double e=1,c=1;
	scanf("%d",&n);
	for(i=1;d!=0&&i<=n;i++)
	{
		c*=1.0/i;
		d=c*10000000000000000;
		e+=c;
	}
	
	printf("%.14f",e);
	return 0;
}