"""
2022-03-29 21:56:56
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (1 / 10) | 1 ms | 1664 KB
Accepted | 1 * (2 / 10) | 1 ms | 1752 KB
Accepted | 1 * (2 / 10) | 1 ms | 1684 KB
Accepted | 1 * (4 / 10) | 1 ms | 1576 KB

"""

#include<stdio.h>
int main()
{
	 int n;
	double p, sum;
	sum = 1.0 ;
	scanf( "%d", &n );
	long long i,j;
if(n<17)
{
	for( i = 1; i <= n; i++ )
	{
		p = 1;
		for( j = 1; j <= i; j++ )
		{
			p = p * j;
		}
		p = 1.0 / p;
		sum+= p;

	}
	printf("%.14f", sum);
}
else
{
printf("2.71828182845905");
}
	return 0;
}