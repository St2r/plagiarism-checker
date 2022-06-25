"""
2022-03-28 22:29:00
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1748 KB
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1636 KB
Accepted | 1 * (4 / 10) | 1 ms | 1664 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j;
	double m=1.0,x;
	scanf("%d",&n);
	if(n>100)
	   n=100;
	for(i=1;i<=n;i++)
	{
	    x=1;
		for(j=1;j<=i;j++)
		{
			x=x/j;
		}
		m=m+x;
	}
	printf("%.14f",m);
	return 0;
}