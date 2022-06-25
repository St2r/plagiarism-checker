"""
2022-03-29 18:01:25
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1728 KB
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1712 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (4 / 10) | 1 ms | 1636 KB

"""

#include <stdio.h>

int main()
{
	int n,i;
	double e=1,f=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
		if((1/f)<1e-15) break;
		e+=1/f;
	}
	printf("%.14lf",e);
	return 0;
}