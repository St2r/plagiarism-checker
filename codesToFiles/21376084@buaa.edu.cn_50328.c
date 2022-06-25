"""
2022-03-26 16:10:27
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1496 KB
Accepted | 1 * (35 / 100) | 3 ms | 1652 KB
Accepted | 1 * (60 / 100) | 4 ms | 1624 KB
664 KB
Wrong Answer | 0 * (2 / 10) | 2 ms | 1556 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 948 KB

"""

#include <stdio.h>
int main()
{
	long long n;
	int i,j,a;
	double e=1;
	scanf("%lld",&n);
	for(i=1;i<=n;i++)
	{
		a=1;
		for(j=1;j<=i;j++)
		{
			a=a*j;
		}
		e+=1.0/a;
	}
	printf("%.14f",e);
	return 0;
}