"""
2022-03-27 14:31:53
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 3 ms | 1652 KB
Accepted | 1 * (4 / 10) | 2 ms | 1696 KB

"""

#include <stdio.h>
int main()
{
    double e = 1, t = 1;
    int n, i;
	scanf("%d", &n);
	if(n<=18)
	{
		for(i = 1; i <= n; i++) 
		{
      		t *= i;
        	e += 1 / t;
    	}
	    printf("%.14f", e);
	}
	else
	{
		printf("2.71828182845905");
	}
	return 0;
}