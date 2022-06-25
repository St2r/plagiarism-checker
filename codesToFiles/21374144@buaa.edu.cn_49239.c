"""
2022-03-28 23:27:20
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1748 KB
Accepted | 1 * (1 / 10) | 1 ms | 1652 KB
Accepted | 1 * (2 / 10) | 1 ms | 1728 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (4 / 10) | 1 ms | 1688 KB

"""

#include<stdio.h>
int main()
{
	int n,i;
	double sum=0,s=1,s1=1,j;
	scanf("%d",&n);
	if(n<100)
	{for(i=1,j=1;i<=n;i++)
	{
		for( ;j<=i;j++)
		{
		s1=s1*(1/j);
		sum+=s1;
		}
	}
	printf("%.14f",sum+1);
	}
	if(n>=100)
	{for(i=1,j=1;i<=100;i++)
	{
		for( ;j<=i;j++)
		{
		s1=s1*(1/j);
		sum+=s1;
		}
	}
	printf("%.14f",sum+1);
	}
	return 0;
 }