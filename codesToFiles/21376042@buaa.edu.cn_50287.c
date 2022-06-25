"""
2022-03-26 11:33:44
AC
1.0
Accepted | 1 * (1 / 10) | 11 ms | 1680 KB
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 10 ms | 1596 KB
Accepted | 1 * (2 / 10) | 14 ms | 1652 KB
Accepted | 1 * (4 / 10) | 18 ms | 1604 KB

"""

#include <stdio.h>
#include <math.h>
int main()
{ 	int n,i=1,j=1;
	double e=1,c=1;
	scanf("%d",&n);
	if(n<=30)
	{while(i<=n)
	{for(j=1;j<=i;j++)
	{c=c/j;
	}
	e=e+c;
	c=1;
	j=1;
	i=i+1;
	}
	printf("%.14f",e);
	}
	else
	printf("2.71828182845905");
		return 0;
 }