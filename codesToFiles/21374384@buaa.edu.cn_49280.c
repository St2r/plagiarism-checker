"""
2022-03-28 15:18:56
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 2 ms | 1676 KB
Accepted | 1 * (2 / 10) | 2 ms | 1620 KB
Accepted | 1 * (4 / 10) | 2 ms | 1548 KB

"""

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	double sum=1;
	double q=1;
	if(n<=18)
	{
		for(int i=1;i<=n;i++)
		{
			q*=(1.0/i);
		    sum+=q;
		}
		printf("%.14f",sum);
	}
	else
	{
		printf("2.71828182845905");
	}
}