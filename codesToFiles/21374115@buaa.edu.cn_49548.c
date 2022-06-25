"""
2022-03-26 08:14:57
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 5 ms | 1636 KB
Accepted | 1 * (2 / 10) | 2 ms | 1648 KB
Accepted | 1 * (4 / 10) | 2 ms | 1700 KB

"""

#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d",&n);
	double sum,a;
	sum = 1;
	a = 1;
	double eqs;
	eqs = pow(10,-15);
	for (int i = 1; i<=n ;i++)
	{
		a /= i;
		sum += a;
		if (a<=eqs)
		{
			break;
		}
	}
	
	printf("%.14lf",sum);
}