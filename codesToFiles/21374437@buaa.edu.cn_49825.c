"""
2022-03-26 08:41:30
TLE
0.6
Accepted | 1 * (1 / 10) | 18 ms | 1608 KB
Accepted | 1 * (1 / 10) | 11 ms | 1668 KB
Accepted | 1 * (2 / 10) | 2 ms | 1664 KB
Accepted | 1 * (2 / 10) | 13 ms | 1608 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 876 KB

"""

#include<stdio.h>
double facter(int i)
{
	int j = 1;
	double sum = 1;
	for (j = 1; j <= i; j++)
		sum = sum * j;
	return sum;
}
int main()
{
	int n;
	double sum = 1.0, a;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		a = 1.0 / facter(i);
		sum = sum + a;
	}

	printf("%.14lf", sum);
	return 0;
}