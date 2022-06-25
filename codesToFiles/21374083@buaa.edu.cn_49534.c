"""
2022-03-26 08:53:45
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1688 KB
Accepted | 1 * (35 / 100) | 12 ms | 1532 KB
Accepted | 1 * (60 / 100) | 16 ms | 1636 KB


"""

#include <stdio.h>
#include <math.h>

long long int jiecheng(int n)
{
	if(n==1||n==0)
	{
		return 1;
	}else
	{
		return n*jiecheng(n-1);
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	
	double sum=1;
	int i,j;
	if(n>=20)
	{
		printf("2.71828182845905");
	}else
	{
		for(i=1;i<=n;i++)
		{
			sum+=(1.0/jiecheng(i));
		}
		printf("%.14f",sum);
	}
	return 0;
}