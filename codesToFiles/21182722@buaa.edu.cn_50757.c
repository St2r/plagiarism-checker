"""
2022-03-29 16:22:13
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1632 KB
Accepted | 1 * (1 / 10) | 2 ms | 1664 KB
Accepted | 1 * (2 / 10) | 2 ms | 1604 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (4 / 10) | 2 ms | 1656 KB

"""

#include <stdio.h>
#include <math.h>
int main()
{
	long long n, a, c;
	double sum, b;
	scanf("%lld",&n);
	sum = 1;
	for(a=1; (a<=n)&&(a<18); a++)
	{
		b = 1;
		for(c=1; c<= a; c++)
		{
			b = b * c;
		}
		sum = sum + (1 / b);		
	}
	printf("%.14f",sum);
	return 0;	
}