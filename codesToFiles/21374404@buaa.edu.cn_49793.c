"""
2022-03-28 19:48:42
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1756 KB
Accepted | 1 * (1 / 10) | 1 ms | 1716 KB
Accepted | 1 * (2 / 10) | 0 ms | 1756 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (4 / 10) | 1 ms | 1684 KB

"""

#include <stdio.h>

int main()
{
	int n,i;
	long long sum=1;
	double result=1;
	scanf("%d",&n);
	if (n>=30)
	{
		printf("2.71828182845905");
	}
	else
	{
	for(i=1;i<=n;i++)
	{
		sum=sum*i;
		result=result+(1.0/sum);
	}
	printf("%.14lf",result);
	}
	return 0;
 }