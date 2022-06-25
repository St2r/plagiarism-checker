"""
2022-03-26 09:32:15
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1604 KB
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 14 ms | 1608 KB
Accepted | 1 * (4 / 10) | 2 ms | 1588 KB

"""

#include<stdio.h>

#define FOR(i,n) for(i = 0;i < n; i++)

int main()
{
	int i,n;
	unsigned long long j;
	double e = 1.0;
	j = 1llu;
	scanf("%d",&n);
	if(n > 17)
		n = 17;
	for(i = 1;i <= n; i++)
	{
		j *= i;
		e += 1.0/j;
//		printf("%d %.14lf\n",i,e);
	}
	printf("%.14lf\n",e);
	return 0;
}