"""
2022-03-29 22:19:33
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1712 KB
Accepted | 1 * (1 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1632 KB
Accepted | 1 * (4 / 10) | 1 ms | 1640 KB

"""

#include<stdio.h>
int main()
{
	int n;
	double m=1.0, i, j=1.0;
	scanf("%d", &n);
	for(i=1.0;(i<=n)&&(i<=17);i++)
	{
		j=j*i;
		m=m+1/j; 
	}
	printf("%.14lf", m);
	return 0;
 }