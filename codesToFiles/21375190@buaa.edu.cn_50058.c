"""
2022-03-26 13:03:24
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (1 / 10) | 2 ms | 1708 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 4 ms | 1648 KB
Accepted | 1 * (4 / 10) | 4 ms | 1712 KB

"""

#include<stdio.h>
int main()
{
	int n;
	double e=1,sum=1;
	scanf("%d",&n);
	if(n<20)
	{
		for(int i=1;i<n+1;i++)
		{
			sum=sum*i;
			e=e+1/sum;
		}	
	}
	else
	{
		for(int i=1;i<21;i++)
		{
			sum=sum*i;
			e=e+1/sum;
		}	
	}
	printf("%.14lf",e);
	return 0;

}