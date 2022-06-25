"""
2022-03-29 17:37:24
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1636 KB
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1700 KB
Accepted | 1 * (4 / 10) | 2 ms | 1704 KB

"""

#include<stdio.h>
int main()
{
	double e=1.0;
	int n,i,j;
	double m;
	
	scanf("%d",&n);
	if(n>20)
	n=20;
	for(i=1;i<=n;i++)
	{
		m=1.0;
		for(j=1;j<=i;j++)
		{
			m=m/j;
		}		
		e=e+m;
	}
	printf("%.14lf",e);
	return 0;
}