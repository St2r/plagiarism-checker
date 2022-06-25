"""
2022-03-26 16:05:27
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1632 KB
Accepted | 1 * (1 / 10) | 2 ms | 1632 KB
Accepted | 1 * (2 / 10) | 2 ms | 1636 KB
Accepted | 1 * (2 / 10) | 2 ms | 1712 KB
Accepted | 1 * (4 / 10) | 2 ms | 1712 KB

"""

#include<stdio.h>
int main()
{
	long n,i;
	double e=1,t=1;
		scanf("%lld",&n);
	for(i=1;i<=n;i++)
	{	t*=i;
		e=e+1.0/t;
		if(i>19)
			break;
	}
	printf("%.14f",e);
	return 0;
}