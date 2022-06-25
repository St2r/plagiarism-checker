"""
2022-03-26 23:43:46
AC
1.0
Accepted | 1 * (1 / 10) | 9 ms | 1664 KB
Accepted | 1 * (1 / 10) | 2 ms | 1636 KB
Accepted | 1 * (2 / 10) | 2 ms | 1640 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (4 / 10) | 2 ms | 1620 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j;
	double e=1.0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		double pp=1.0;
		for(j=1;j<=i;j++)
		{
			pp=pp*j;
		}
		e=e+1/pp;
		if(i>=100)
		{
			break;
		}
	}
	printf("%.14f",e);
	
	return 0;
}