"""
2022-03-26 16:40:09
AC
1.0
Accepted | 1 * (1 / 10) | 15 ms | 1608 KB
Accepted | 1 * (1 / 10) | 11 ms | 1664 KB
Accepted | 1 * (2 / 10) | 12 ms | 1692 KB
Accepted | 1 * (2 / 10) | 11 ms | 1616 KB
Accepted | 1 * (4 / 10) | 2 ms | 1648 KB

"""

#include<stdio.h>
int main()
{
	long long i,n,a;
	double b,sum;
	sum=1;
	scanf("%lld",&n);
	if(n>20)
	    n=20;
	for(i=1;i<=n;i++)
	{
		a=1;
		for(int j=1;j<=i;j++)
		    a=a*j;
		b=1.0/a;
		sum=sum+b;
	}
	printf("%.14lf",sum);
	return 0;
}