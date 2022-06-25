"""
2022-03-28 18:45:22
AC
1.0
Accepted | 1 * (1 / 10) | 9 ms | 1636 KB
Accepted | 1 * (1 / 10) | 2 ms | 1632 KB
Accepted | 1 * (2 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 2 ms | 1664 KB
Accepted | 1 * (4 / 10) | 2 ms | 1608 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j;
	double a=1;
	double b=1;
	scanf("%d",&n);
	for(i=1;i<=n&&i<=19;i++)
	{
		for(j=i;j>0;j--)
		{
			a=a/j;
		}
		b=b+a;
		a=1;
	}
	printf("%.14lf",b);
	return 0;
}