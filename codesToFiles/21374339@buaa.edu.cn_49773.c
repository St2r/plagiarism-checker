"""
2022-03-28 20:24:58
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1732 KB
Accepted | 1 * (1 / 10) | 1 ms | 1744 KB
Accepted | 1 * (2 / 10) | 1 ms | 1744 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (4 / 10) | 1 ms | 1680 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j;
	double e=1,b=1;
	scanf("%d",&n);
	if(n>17)
	n=17;
	for(i=1;i<=n;i++)
	{
		for(j=i;j>0;j--)
		{
		b=b/j;
	}
	e=e+b;b=1;
	}
	 printf("%.14f",e);
	return 0;
}