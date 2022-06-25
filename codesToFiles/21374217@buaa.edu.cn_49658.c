"""
2022-03-29 22:28:23
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 1 ms | 1728 KB
Accepted | 1 * (2 / 10) | 0 ms | 1732 KB
Accepted | 1 * (4 / 10) | 1 ms | 1748 KB

"""

#include <stdio.h>
int main()
{
	int n,i,k;
	double e=1,a=1,m;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=i;k++)
		{
			a=a*k;
		}
		m=(double)1/a;
		if(m<=0.000000000000000000000001)
		{
			break;
		}
		e=e+m;
		a=1;
	}
	printf("%.14f",e);
	return 0;
}