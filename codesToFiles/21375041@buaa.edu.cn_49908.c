"""
2022-03-26 10:45:30
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1636 KB
Accepted | 1 * (1 / 4) | 2 ms | 1624 KB
Accepted | 1 * (1 / 4) | 3 ms | 1688 KB
Accepted | 1 * (1 / 4) | 8 ms | 1640 KB

"""

#include <stdio.h>
int main()
{
	int n,i;
	double e=1,j;
	scanf("%d",&n);
	j=1;
	for(i=1;i<=n;i++)
	{
		j=j*i;
		e=e+1./j;
		if(1./j<1e-15) break;
	}
	printf("%.14lf",e);
}