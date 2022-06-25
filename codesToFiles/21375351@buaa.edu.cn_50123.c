"""
2022-03-26 09:51:41
AC
1.0
Accepted | 1 * (1 / 4) | 7 ms | 1640 KB
Accepted | 1 * (1 / 4) | 7 ms | 1704 KB
Accepted | 1 * (1 / 4) | 13 ms | 1652 KB
Accepted | 1 * (1 / 4) | 15 ms | 1708 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j;
	double x=1;
	double sum=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j>0;j--)
		{
			x=x/j;
		}
		sum=sum+x;
		x=1;
	}
	printf("%.14f",sum);
	return 0;
}