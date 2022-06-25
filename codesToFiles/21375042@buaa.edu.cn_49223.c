"""
2022-03-28 12:50:02
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1664 KB
Accepted | 1 * (1 / 10) | 2 ms | 1680 KB
Accepted | 1 * (2 / 10) | 3 ms | 1620 KB
Accepted | 1 * (2 / 10) | 2 ms | 1624 KB
Accepted | 1 * (4 / 10) | 2 ms | 1684 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	double e=1.0,n;
	scanf("%lf",&n);
	if(n>=20) n=20;
	for(double i=1;i<=n;i++)
	{
		double sum=1;
		for(double j=1;j<=i;j++)
		{
			sum/=j;
		}
		e+=sum;
	}
	printf("%.14lf",e);
}