"""
2022-03-26 20:08:37
AC
1.0
Accepted | 1 * (1 / 10) | 8 ms | 1692 KB
Accepted | 1 * (1 / 10) | 2 ms | 1624 KB
Accepted | 1 * (2 / 10) | 9 ms | 1640 KB
Accepted | 1 * (2 / 10) | 2 ms | 1632 KB
Accepted | 1 * (4 / 10) | 9 ms | 1616 KB
KB

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