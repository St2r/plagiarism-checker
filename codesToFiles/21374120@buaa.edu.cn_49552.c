"""
2022-03-28 11:11:34
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (1 / 10) | 2 ms | 1680 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (4 / 10) | 2 ms | 1656 KB

"""

#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	double a=1,b=1;
	if(n<=1000)
	{
	for(i=1;i<=n;i++)
	{
		a=a*i;
		b=b+(1.0/a);
	}
	printf("%.14lf\n",b);}
	else
	{
		printf("2.71828182845905\n");
	}
	return 0;
}