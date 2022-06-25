"""
2022-03-26 13:27:39
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1624 KB
Accepted | 1 * (1 / 10) | 2 ms | 1628 KB
Accepted | 1 * (2 / 10) | 2 ms | 1732 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (4 / 10) | 2 ms | 1664 KB

"""

#include <stdio.h>

int main()
{
	int n,i,j;
	double k=1;
	double e=1;
	scanf("%d",&n);
	if(n<=17)
	{
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			k=k*j;
		}
		e=e+1/k;
		k=1;
	}
    
	printf("%.14f\n",e);
}
	if(n>17)
	{
		printf("2.71828182845905");
	}
	return 0;
}