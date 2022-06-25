"""
2022-03-29 21:06:14
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (1 / 10) | 1 ms | 1664 KB
Accepted | 1 * (2 / 10) | 0 ms | 1680 KB
Accepted | 1 * (2 / 10) | 0 ms | 1636 KB
Accepted | 1 * (4 / 10) | 1 ms | 1744 KB

"""

#include <stdio.h>

int main()
{
	int n;
	double sum=1.0, s=1.0, i;
	scanf("%d", &n);
	
	if ( n <= 16 )
	{
		for (i=1.0; i<=n; i++)
	    {
	    	s*=i;
    		sum+=(1/s);
    	}
	}
	else
	{
	    sum = 2.71828182845905;
	}
	
	printf("%.14f", sum);
	
	return 0;
}