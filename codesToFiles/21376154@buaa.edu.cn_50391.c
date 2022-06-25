"""
2022-03-26 15:12:49
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1624 KB
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 2 ms | 1560 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (4 / 10) | 2 ms | 1608 KB
ms | 1636 KB

"""

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#define eps 1e-10
int main()
{
	long long n;
	double j=1;
	double e=1.0,xn=1.0;
	scanf("%lld",&n);
	if(n>=10000){
		for(double i=1;i<=30;i++)
	{
		for(j=1.0;j<=i;j++)
		{ 
		xn=xn*(double)1.0/j;
		
	}
	
	e=e+xn;
	xn=1.0;
	
	
}
	}
	
	else{
		for(double i=1;i<=n;i++)
	{
		for(j=1.0;j<=i;j++)
		{ 
		xn=xn*(double)1.0/j;
		
	}
	
	e=e+xn;
	xn=1.0;
	
	
}
	}
	
	
	printf("%.14lf",e);
	return 0;
}