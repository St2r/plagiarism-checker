"""
2022-03-28 23:12:05
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1692 KB
Accepted | 1 * (1 / 10) | 1 ms | 1692 KB
Accepted | 1 * (2 / 10) | 0 ms | 1760 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (4 / 10) | 1 ms | 1748 KB

"""

#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main()
{
	int n,record,i,j,k;
	long long sum=1;
	double a=1,b=1,c;
	scanf("%d",&n);
	if(n<17)
	{
		for(j=1;j<=n;j++)
		{
			a=a*j;
			c=1/a;
			b=c+b;
		}
		printf("%.14lf",b);
	}
	else
	{
		for(k=1;k<=17;k++)
		{
			a=a*k;
			c=1/a;
			b=c+b;
		}
		printf("%.14lf",b);
	}
	return 0;
}