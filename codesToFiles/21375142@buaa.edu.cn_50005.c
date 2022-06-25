"""
2022-03-27 07:58:32
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1660 KB
Accepted | 1 * (4 / 10) | 2 ms | 1632 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j;
	double e=1,di=1;
	scanf("%d",&n);
	if(n>20)
	n=20;
	for(i=1;i<=n;i++)
	{
		for(j=i;j>=1;j--)
		{
			di=j*di;
		}
		e=e+(1/di);
		di=1;
	}
	printf("%.14lf",e);
	return 0;
}