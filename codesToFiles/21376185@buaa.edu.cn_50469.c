"""
2022-03-29 22:26:35
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1652 KB
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 0 ms | 1688 KB
Accepted | 1 * (4 / 10) | 1 ms | 1644 KB

"""

#include<stdio.h>
int main()
{
	double a,e;
	int i,n;
	scanf("%d",&n);
	if(n<=18)
	{
	a=1;
	e=1;
	for(i=1;i<=n;i++)
	{
		a=a*1.0/(double)i;
		e=e+a;
	}
	printf("%.14f",e);
	}
	else
	printf("%.14f",2.718281828459045);
	return 0;
}