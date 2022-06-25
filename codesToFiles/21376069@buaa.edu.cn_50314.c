"""
2022-03-28 19:57:50
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 0 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (4 / 10) | 1 ms | 1684 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	double e;
	scanf("%d",&n);
	if(n>18)
	{
		printf("2.71828182845905\n");
	}
	else
	{
		double x=1.0;
		double z;
		for(int a=1;a<=n;a++)
		{
			long long y=1;
			for(int i=1;i<=a;i++)
			{
				y=y*i;
			}
			z=(double)1.0/y;
			x=(double)x+z;
		}
		printf("%.14f\n",x);
	}
	return 0;
}