"""
2022-03-29 19:25:04
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (1 / 10) | 1 ms | 1640 KB
Accepted | 1 * (2 / 10) | 0 ms | 1732 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (4 / 10) | 1 ms | 1736 KB

"""

#include <stdio.h>
#include <math.h>

int main()
{
	int n, i, j;
	long long fac;
	double sum = 1.0;
	scanf("%d", &n);
	if (n <= 33)
	{
		for (i = 1; i <= n; i++)
	    {
		    fac = 1;
		    for(j = 1; j <= i; j++)
			    fac = fac * j;
		    sum = sum + (1.0 / fac);
	    }
	}
	else
	    sum = 2.718281828459045235;		
	printf("%.14lf", sum);
	return 0;
}