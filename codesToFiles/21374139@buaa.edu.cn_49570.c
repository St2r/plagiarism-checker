"""
2022-03-29 14:41:45
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 0 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (4 / 10) | 1 ms | 1712 KB

"""

#include <stdio.h>

int main()
{
	double e=1,a=1,b;
	int n,i;
	scanf("%d",&n);
	if(n>20)
	n=20;
	for(i=1;i<=n;i++)
	{
		a=a*i;
		b=1/a;
		e=e+b;
	}
	printf("%.14lf",e);
	return 0;
 }