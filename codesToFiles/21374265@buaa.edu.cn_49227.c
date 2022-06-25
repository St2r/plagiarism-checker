"""
2022-03-26 15:33:59
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1552 KB
Accepted | 1 * (1 / 10) | 3 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1692 KB
Accepted | 1 * (2 / 10) | 2 ms | 1628 KB
Accepted | 1 * (4 / 10) | 3 ms | 1700 KB

"""

#include<stdio.h>
int main()
{
	double e,a,mul,n,i,j;
	double sum=1;
	scanf("%lf",&n);
	if(n<20)
	{
	for(i=1;i<=n;i++)
	{
		mul=1;
		for(j=1;j<=i;j++)
		{			
			mul=mul*j;
			
		}
		a=1/mul;
		sum=sum+a;
	}
	e=sum;
	printf("%.14f",e);
	}
	else
	{
		printf("2.71828182845905");
	}
	
	return 0;
}