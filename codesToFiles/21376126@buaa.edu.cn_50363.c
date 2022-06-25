"""
2022-03-26 09:09:07
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1720 KB
Accepted | 1 * (1 / 4) | 10 ms | 1664 KB
Accepted | 1 * (1 / 4) | 9 ms | 1660 KB
Accepted | 1 * (1 / 4) | 10 ms | 1716 KB

"""

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

int main()
{
	double ans = 1;
	long long fac = 1;
	int n, i;
	scanf("%d", &n);
	for (i = 1; i <= MIN(n, 20); i ++)
	{
		fac *= i;
		ans += 1.0 / fac;
	}
	printf("%.14lf", ans);
	return 0;
}