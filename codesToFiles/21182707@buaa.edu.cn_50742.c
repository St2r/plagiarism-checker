"""
2022-03-29 22:30:49
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1664 KB
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1636 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (4 / 10) | 1 ms | 1640 KB

"""

#include <stdio.h>
#include <math.h>
int main()
{
	long long n, a, b;
	double sum,m;
	scanf("%lld",&n);
	a=1;
	sum=1;
	
	while ((a<=n)&&(a<=17))
	{
		b=1;
		m=1;
		while (b<=a)
		{
			m=m*b;
			b++;
		}
		sum=sum+(1/m);
		a++;
		
	}
	printf("%.14f",sum);
	
	return 0;
	
}