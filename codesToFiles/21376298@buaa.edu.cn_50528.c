"""
2022-03-29 23:02:09
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 0 ms | 1652 KB
Accepted | 1 * (4 / 10) | 1 ms | 1660 KB

"""

#include <stdio.h>

int main()
{
	int n,i,k;
	double e;
	double a[10000];
	
	scanf("%d",&n);

	e=1;
	if(n<=16)
	{
		for(i=1;i<=n;i++)
	    {
		    a[i]=1;
			for(k=1;k<=i;k++)
		    {
		    	a[i]=a[i]/k;
			}
			e=e+a[i];
	    }
	    printf("%.14f",e);
	}
	else
	{
		printf("2.71828182845905");
	}
	
	return 0;
}