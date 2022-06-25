"""
2022-03-29 19:08:04
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1632 KB
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1628 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (4 / 10) | 2 ms | 1632 KB

"""

#include<stdio.h>
int main()
{
	int i=1, n;
	double e=1.0, j=1.0;
	scanf("%d", &n);
	
	if(n<=20)
	{
		while(i<=n)
		{
			j=j*i;
			e=e+1/j;
			i++;
		}
	}
	else
	{
		while(i<=20)
		{
			j=j*i;
			e=e+1/j;
			i++;
		}
	}
	printf("%.14lf", e);
	return 0;
}