"""
2022-03-29 13:55:11
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1752 KB
Accepted | 1 * (1 / 10) | 0 ms | 1652 KB
Accepted | 1 * (2 / 10) | 1 ms | 1756 KB
Accepted | 1 * (2 / 10) | 1 ms | 1684 KB
Accepted | 1 * (4 / 10) | 0 ms | 1648 KB

"""

#include<stdio.h>


int main()
{
	double e = 0;
	int n;
	int i = 0;
	int j = 0;
	double sum = 1;
	long double temp = 0;
	scanf("%d", &n);
	for (i = 0; i <= n; i++)
	{
		if (i != 0)
		{
			sum *= i;
		}
		 
		temp = 1.0 / sum;
		e += temp;

		if (temp < 1e-14)
		{ 
			break;
		}

	}
	printf("%.14lf", e);
	return 0;
}