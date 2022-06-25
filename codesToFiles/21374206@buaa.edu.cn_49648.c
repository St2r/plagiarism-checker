"""
2022-03-26 13:02:05
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (1 / 10) | 2 ms | 1640 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1660 KB
Accepted | 1 * (4 / 10) | 2 ms | 1652 KB

"""

#include<stdio.h>
int main()
{
	int n, i, j;
	double u=1.0, s=1.0;
	scanf("%d", &n);
	if(n>20)
	{
		n=20;
	}
	for(i=1;i<n+1;i++)
	{
		u = u / i;
		s = s + u;
	}
	printf("%.14lf", s);
	return 0;
}