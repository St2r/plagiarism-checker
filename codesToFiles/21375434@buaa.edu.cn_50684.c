"""
2022-03-29 20:52:17
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1736 KB
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 0 ms | 1684 KB
Accepted | 1 * (4 / 10) | 1 ms | 1676 KB

"""

#include<stdio.h>
int main()
{
	double n,a,b,c,d;
	a=1,b=1,c=1,d=1;
	scanf("%lf",&n);
	while(a<=n&&a<=17)
	{
		while(b<=a)
		{
			d=d*b;
			b=b+1;
		}
		c=c+1/d;
		b=1;
		d=1;
		a=a+1;
	}
	printf("%.14lf",c);
	return 0;
}