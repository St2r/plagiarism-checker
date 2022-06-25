"""
2022-03-28 18:00:12
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1628 KB
Accepted | 1 * (1 / 10) | 2 ms | 1664 KB
Accepted | 1 * (2 / 10) | 2 ms | 1700 KB
Accepted | 1 * (2 / 10) | 2 ms | 1624 KB
Accepted | 1 * (4 / 10) | 3 ms | 1724 KB

"""

#include <stdio.h>
#define eps 1e-14
int main()
{
	int n,i,j;
	double d=1.0,e=1.0;
	scanf("%d",&n);
	if(n<=18)
	{
		for(i=1;i<=n;i++)
		{	
			for(j=1,d=1.0;j<=i;j++)
			{
				d*=1.0/j;
			}
			e+=d;
		}
	}
	else
	{
		for(i=1;d>eps;i++)
				{	
					
					for(j=1,d=1;j<=i;j++)
							{
								d*=1.0/j;
							}
				
						e+=d;
				}
	}
	printf("%.14lf",e);
	return 0;
}