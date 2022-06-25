"""
2022-03-29 16:28:05
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1640 KB
Accepted | 1 * (4 / 10) | 2 ms | 1652 KB

"""

#include <stdio.h>

int main()
{
	int n;
	long long x=1;
	double ans=1.0;
	scanf("%d",&n);
	if(n>17)
	n=17;
	for(int i=1;i<=n;i++)
	{
		x=x*i;
		ans=ans+(1.0/x);
	}
	printf("%.14lf\n",ans);
}