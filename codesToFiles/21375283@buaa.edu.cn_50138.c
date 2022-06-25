"""
2022-03-29 21:57:40
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1688 KB
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1728 KB
Accepted | 1 * (2 / 10) | 1 ms | 1636 KB
Accepted | 1 * (4 / 10) | 1 ms | 1656 KB

"""

#include <stdio.h>
double f(int n);
int  main ()
{    int n,i;
    double e=1;
    scanf("%d",&n);
    if(n>=20)
    {printf("2.71828182845905");
	}
    else
    {
	for(i=1;i<=n;i++)
      {e=e+1/f(i);
	   }
	printf("%.14lf",e);
    }
    return 0;
}
double f(int n)
{      if(n<1)
        return 1;
        else
        return n*f(n-1);
}