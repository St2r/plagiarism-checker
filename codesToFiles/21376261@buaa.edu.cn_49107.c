"""
2022-03-29 19:22:48
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1680 KB
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (2 / 10) | 0 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (4 / 10) | 1 ms | 1636 KB

"""

#include<stdio.h>
#include<math.h>
#define pi 3.1415926


int main()
{	
	long long n,i,j;
	double e;
	
	e = 2;
	
	n = 1;
	scanf("%lld",&j);
	
	if(j>=18)
	{
		j = 18;
	}
	else
	{
		j = j;
		
	}
	
	for(i=2;i<=j;i++)
	{

		n = n * i;
		e = e + (1.0)*1/n;
		
		 
	}
	
	printf("%.14lf",e);
	
	return 0;
	
}