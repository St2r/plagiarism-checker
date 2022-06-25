"""
2022-03-26 12:44:32
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1644 KB
Accepted | 1 * (2 / 10) | 3 ms | 1652 KB
Accepted | 1 * (4 / 10) | 2 ms | 1616 KB

"""

#include <stdio.h>
#include <math.h>
#define EPC 5e-15
#define E 2.71828182845905
int main()
{
	long long n,m = 1,i;
	double e = 1.0;
	scanf("%lld",&n);
	for(i = 1;i <= n;i ++)
	{
		m *= i;
		e += 1.0 / m;
		if(fabs(E - e) < EPC)
		{
			printf("%.14f",e);
			return 0;
		}
	}
	printf("%.14f",e);
	return 0;
}