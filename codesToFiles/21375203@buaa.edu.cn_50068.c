"""
2022-03-26 13:01:44
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (1 / 10) | 2 ms | 1712 KB
Accepted | 1 * (2 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 2 ms | 1708 KB
Accepted | 1 * (4 / 10) | 2 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
	long long n,i,b=1,m;
	
	double a=1;
	
	scanf("%lld",&n);
	if(n<=17)
	{	
		for(i=1;i<=n;i++)
		{
			for(m=1;m<=i;m++)
			
			b=b*m;
			
			a=a+(double)1/b;
			
			b=1;
		}
	printf("%.14f",a);
	}	
	
	if(n>17)
	
	printf("2.71828182845905");
	
	return 0;
}