"""
2022-03-29 22:06:20
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1636 KB
Accepted | 1 * (1 / 10) | 0 ms | 1716 KB
Accepted | 1 * (2 / 10) | 1 ms | 1716 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (4 / 10) | 1 ms | 1756 KB

"""

#include <stdio.h>
int main()
{
	int n,i;
	long long sum=1;
	double e=1,op=0;
	i=1;
	scanf("%d",&n);
	if(n>20)
	{
		n=20;
	}
	while(i<=n)
	{
		sum*=i;
		op=1.0/sum;
		e=op+e;
		i++;
	}
	printf("%.14lf",e);
	return 0;
}