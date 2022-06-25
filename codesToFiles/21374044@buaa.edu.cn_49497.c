"""
2022-03-27 15:41:59
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1664 KB
Accepted | 1 * (1 / 4) | 3 ms | 1576 KB
Accepted | 1 * (1 / 4) | 2 ms | 1568 KB
Accepted | 1 * (1 / 4) | 2 ms | 1676 KB
B

"""

#include<stdio.h>
int main()
{
	int n , d=1 ;
	double e=1.0 ;
	scanf("%d", &n );
	int i=1;
	while(n--)
	{
		int m=1;
		while(m<=i)
		{
			d=d*m;
			m++;
		}
		e=e+1.0*1/d;
		i++;
		d=1;
	}
	printf("%.14lf", e );
	return 0;
}