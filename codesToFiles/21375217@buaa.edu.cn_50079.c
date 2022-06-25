"""
2022-03-26 17:57:51
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1620 KB
Accepted | 1 * (1 / 10) | 2 ms | 1680 KB
Accepted | 1 * (2 / 10) | 2 ms | 1680 KB
Accepted | 1 * (2 / 10) | 2 ms | 1676 KB
Accepted | 1 * (4 / 10) | 2 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
	long long int n,i,j;
	double b=1,c=1;
	scanf("%lld",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j>0;j--)
		{
			b=b/j;
		}
		if(b<0.000000000000001)
		break;
		c=c+b;
		b=1;
	}
	printf("%.14lf",c);
}