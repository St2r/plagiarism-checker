"""
2022-03-26 12:50:32
AC
1.0
Accepted | 1 * (1 / 10) | 3 ms | 1636 KB
Accepted | 1 * (1 / 10) | 2 ms | 1712 KB
Accepted | 1 * (2 / 10) | 3 ms | 1640 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (4 / 10) | 3 ms | 1712 KB

"""

#include<stdio.h>
int main()
{
	double e;
	int n;
	scanf("%d",&n);
	if(n<=17)
	{
		for(int i=1;i<=n;i++)
		{
			double s=1;
			for(int j=1;j<=i;j++)
			{
				s*=j;
			}
			e+=1.0/s;
		}
		printf("%.14lf",1.0+e);
	}
	else
		{
		for(int i=1;i<=17;i++)
		{
			double s=1;
			for(int j=1;j<=i;j++)
			{
				s*=j;
			}
			e+=1.0/s;
		}
		printf("%.14lf",1.0+e);
	}
	return 0;
	
}