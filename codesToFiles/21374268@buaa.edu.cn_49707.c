"""
2022-03-29 23:53:15
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1680 KB
Accepted | 1 * (1 / 10) | 1 ms | 1748 KB
Accepted | 1 * (2 / 10) | 1 ms | 1760 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (4 / 10) | 1 ms | 1688 KB

"""

#include<stdio.h>
int main()
{
	int n;
	double i,e=1.00000000000000,m=1.00000000000000;
   
	scanf("%d",&n);
if(n<=17)
    {for(i=1;i<=n;i++)
	{m=m*i;
	e=e+1/m;
	}
}
else e= 2.71828182845905;

	printf("%0.14lf",e);
	return 0;
 }