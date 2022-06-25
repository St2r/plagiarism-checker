"""
2022-03-27 18:55:28
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1552 KB
Accepted | 1 * (1 / 10) | 2 ms | 1620 KB
Accepted | 1 * (2 / 10) | 2 ms | 1624 KB
Accepted | 1 * (2 / 10) | 2 ms | 1540 KB
Accepted | 1 * (4 / 10) | 2 ms | 1632 KB


"""

#include<stdio.h>
int main()
{
	double e=1.0;
	long long n,a=1,i=1,j=1;
	scanf("%lld",&n);
	while((i<=n)&&(i<=18))
	{
		while(j<=i)
		{
			a=a*j;
			j++;
		}
		e=e+(1.0/a);
		a=1;
		j=1;
		i++;
	}
	printf("%.14lf",e);
	return 0;
}