"""
2022-03-26 15:58:37
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1640 KB
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (2 / 10) | 2 ms | 1664 KB
Accepted | 1 * (2 / 10) | 3 ms | 1648 KB
Accepted | 1 * (4 / 10) | 2 ms | 1664 KB

"""

#include<stdio.h>
int main()
{
	int n,i;
	double e,k=1,a=1;
	scanf("%d",&n);
	if(n<=17)
	{
			for(i=1;i<=n;i++)
		{
			a=a*i;
			k=k+1/a;
		}
		e=k;
		printf("%.14f",e);
		return 0;
	} 
	else
	{
		for(i=1;i<=17;i++)
		{
			a=a*i;
			k=k+1/a;
		}
		e=k;
		printf("%.14f",e);
		return 0;
	}
	
}