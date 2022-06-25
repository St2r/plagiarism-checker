"""
2022-03-26 09:51:02
AC
1.0
Accepted | 1 * (1 / 10) | 9 ms | 1616 KB
Accepted | 1 * (1 / 10) | 2 ms | 1676 KB
Accepted | 1 * (2 / 10) | 12 ms | 1700 KB
Accepted | 1 * (2 / 10) | 5 ms | 1704 KB
Accepted | 1 * (4 / 10) | 2 ms | 1676 KB

"""

#include<stdio.h>
#include<math.h>
int main(void)
{
	double e, fac, k; 
	long long n, i, j;
	e = 1;
	k = 1;
	scanf("%lld", &n);
		for (i = 1; i <= n; i++)
		{
			for (j = 1, k = 1; j <= i; j++)
			{
				k = k*j;
			}
			fac = (double)(1/k);
			e += fac; 
			if (fac < 1e-14)
			{
				break;
			}
		} 
		
	printf("%.14f", e);
}