"""
2022-03-28 22:07:01
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1644 KB
Accepted | 1 * (1 / 10) | 1 ms | 1640 KB
Accepted | 1 * (2 / 10) | 1 ms | 1632 KB
Accepted | 1 * (2 / 10) | 1 ms | 1748 KB
Accepted | 1 * (4 / 10) | 1 ms | 1740 KB

"""

#include <stdio.h>
int main()
{
	int n,i,j,e;
	double k,l;
	scanf("%d",&n);
	if(n<800)
	{
		for(i=0;i<=n;i++)
		{	
			l=1;
			for(j=0;j<=i;j++)
			{
				if(j==0)
				{
					l=1;
				}
				else 
				{
					l=l/j;
				}
			}
			k=k+l;
		}
		printf("%.14lf",k);
	}
	else 
	{
		printf("2.71828182845905");
	}
	return 0;
}