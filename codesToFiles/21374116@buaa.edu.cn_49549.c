"""
2022-03-29 20:32:28
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1708 KB
Accepted | 1 * (1 / 10) | 2 ms | 1720 KB
Accepted | 1 * (2 / 10) | 2 ms | 1716 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (4 / 10) | 2 ms | 1708 KB

"""

#include <stdio.h>

long long factorial = 1;
double sum = 1;
int main()
{
	int n;
	scanf("%d", &n);
	if(n > 25) 
		n = 25;
	for(int i = 1; i <= n; ++i)
	{
		factorial *= i;
		sum += 1.0 / factorial;
	}
	printf("%.14lf", sum);
	return 0;
}