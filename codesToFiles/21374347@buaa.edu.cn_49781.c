"""
2022-03-26 13:05:31
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1708 KB
Accepted | 1 * (1 / 10) | 2 ms | 1680 KB
Accepted | 1 * (2 / 10) | 2 ms | 1716 KB
Accepted | 1 * (2 / 10) | 3 ms | 1648 KB
Accepted | 1 * (4 / 10) | 2 ms | 1708 KB

"""

#include <stdio.h>

int main()
{
	int n, i, j = 1;
	double p, sum = 1;
	scanf("%d", &n);
	if(n >= 17)
	n = 17;
	else
	n = n;
	while(j <= n)
	{
		i = 1, p = 1;
		while(i <= j)
		{
			p = p / (1.0*i);
			i = i + 1;
		}
		sum = sum + p;
		j = j + 1;
	}
	printf("%.14lf", sum);
	return 0;
}