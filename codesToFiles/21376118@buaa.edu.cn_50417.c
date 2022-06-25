"""
2022-03-26 16:01:45
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1636 KB
Accepted | 1 * (1 / 10) | 6 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 2 ms | 1716 KB
Accepted | 1 * (4 / 10) | 2 ms | 1688 KB

"""

#include<stdio.h>
int main()
{
	int n;
	double e=1.0;
	long long temp =1;
	scanf("%d",&n);
	if(n<=17)
	{
	for(int i=1;i<=n;i++)
	{
		temp=temp*i	;//jie cheng
		e=e+1.0/temp;//lei jia
	}
	printf("%.14lf",e);
}
	else
	printf("2.71828182845905");
	return 0;
}