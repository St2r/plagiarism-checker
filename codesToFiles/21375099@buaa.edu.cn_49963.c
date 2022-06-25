"""
2022-03-29 19:56:31
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (1 / 10) | 1 ms | 1676 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (4 / 10) | 1 ms | 1656 KB

"""

#include <stdio.h>
int main()
{
	double n,i,j,m=1;
	double e=1;
	scanf("%lf",&n);
	if(n<=17)
	{
		n=n;}
		else
		{
			n=17;
		}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			m=m*j;
		}
			e=e+(1.0/m);
			m=1;
	}
	printf("%.14f",e);
	return 0;
}