"""
2022-03-28 18:05:34
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (2 / 10) | 2 ms | 1696 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (4 / 10) | 2 ms | 1652 KB

"""

#include<stdio.h>
int main()
{
	int n,i;
	double s=1.0,k=1.0;
	scanf("%d",&n);
	if(n<=17)
	{
		for(i=1;i<=n;i++)
		{
			k=k*(1.0/i);
			s=s+k;
		}
		printf("%.14lf",s);
	}
	else
	{
		for(i=1;i<=17;i++)
		{
			k=k*(1.0/i);
			s=s+k;
		}
		printf("%.14lf",s);
	}
	

	return 0;
}