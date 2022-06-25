"""
2022-03-27 23:16:01
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1600 KB
Accepted | 1 * (1 / 10) | 3 ms | 1604 KB
Accepted | 1 * (2 / 10) | 2 ms | 1592 KB
Accepted | 1 * (2 / 10) | 2 ms | 1696 KB
Accepted | 1 * (4 / 10) | 2 ms | 1652 KB

"""

#include<stdio.h>
int main(void)
{
	unsigned long long n, i, j;
	double e, fm;
	scanf("%llu", &n);
	
	if (n > 20)
		printf("2.71828182845905");
	else
	{
		e = 1;
		for (i = 1; i <= n; i++)
		{
			fm = 1;
			for (j = 1; j <= i; j++)
			{
				fm /= (double)j;
			}
			e += fm;
		}	
		printf("%.14f", e);
	}
	
	return 0;
}