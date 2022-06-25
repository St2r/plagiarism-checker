"""
2022-03-27 11:08:25
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (1 / 10) | 2 ms | 1696 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (4 / 10) | 2 ms | 1720 KB

"""

#include<stdio.h>

int main()
{
	int n,i,j;
	double e=1.0,tmp;
	scanf("%d",&n);
	if(n>20)
		n=20;
	for(i=1;i<=n;i++)
	{
		tmp=1.0;
		for(j=1;j<=i;j++)
		{
			tmp = tmp/j;
		}
		e+=tmp;
	}
	printf("%.14f",e);
	return 0;
}