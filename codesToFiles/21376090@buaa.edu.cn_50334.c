"""
2022-03-30 17:24:03
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1728 KB
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1728 KB
Accepted | 1 * (4 / 10) | 1 ms | 1740 KB

"""

#include<stdio.h>
int main()
{

	int n;
	double tmp = 1.0, num = 1.0;
	scanf ("%d", &n);
	if (n > 17)
	n = 17;
	for (int i = 1; i <= n; i++)
	{
		tmp *= i;
		num += 1 / tmp;
	}
	printf("%.14lf", num);
	return 0;
}