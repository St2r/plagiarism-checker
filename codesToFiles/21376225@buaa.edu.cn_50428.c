"""
2022-03-29 16:33:52
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1696 KB
Accepted | 1 * (1 / 10) | 2 ms | 1720 KB
Accepted | 1 * (2 / 10) | 2 ms | 1640 KB
Accepted | 1 * (2 / 10) | 2 ms | 1720 KB
Accepted | 1 * (4 / 10) | 2 ms | 1652 KB

"""

#include<stdio.h>
int main()
{
	int n, i, j;
	double a=1,sum=1;
	scanf("%d", &n);
	j=(n >= 20) ? 20 : n;
		for (i = 1; i <= j; i++)
		{
			a *= (1.0 / i);
			sum += a;
		}
		printf("%.14lf\n", sum);
		return 0;
}