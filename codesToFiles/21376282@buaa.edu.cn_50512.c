"""
2022-03-26 12:41:13
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1680 KB
Accepted | 1 * (1 / 10) | 2 ms | 1708 KB
Accepted | 1 * (2 / 10) | 2 ms | 1636 KB
Accepted | 1 * (2 / 10) | 2 ms | 1608 KB
Accepted | 1 * (4 / 10) | 2 ms | 1648 KB

"""

#include <stdio.h>
int main()
{
	double e,a;
	int i,n;
	e=1;a=1;
    scanf("%d",&n);
	
		if(n>16)
		{
		  printf("2.71828182845905");
		}
		else
		{
			for(i=1;i<=n;i++)
	      {
		    a*=(double)i;
		    e+=(1/a);
	      }
	    printf("%.14lf\n",e);
	    }
	
    return 0;
}