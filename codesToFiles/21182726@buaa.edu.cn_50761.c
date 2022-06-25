"""
2022-03-29 23:20:31
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1660 KB
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 1 ms | 1676 KB
Accepted | 1 * (4 / 10) | 0 ms | 1688 KB

"""

#include <stdio.h>
#include <math.h>
int main()
{
	long long n, a, j;
	double sum, b;
	scanf("%lld",&n);
	a = 1;
	sum = 1;
	while ((a <= n)&&(a <= 17))
	{
		j = 1;
		b = 1;
		while (j <= a)
		{
			b = b * j;
			j++;
		}
		sum = sum + (1 / b);
		a++;
		
	}
	printf("%.14f",sum);
	return 0;
	
	
	
}