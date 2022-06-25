"""
2022-03-27 18:51:50
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1720 KB
Accepted | 1 * (1 / 10) | 2 ms | 1720 KB
Accepted | 1 * (2 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 2 ms | 1628 KB
Accepted | 1 * (4 / 10) | 2 ms | 1684 KB

"""

#include<stdio.h>

int main()
{
	int n,i,j;
	double a=1;
	scanf("%d",&n);
	double x=1;
	for(i=1;i<=n;i++)
	{
		for(j=i;j>0;j--)
		{
			a=a/j;
		}
		x=x+a;
		a=1;
		if(i==19)
		{
			break;
		}
	}
	printf("%.14f",x);
	return 0;
}