"""
2022-03-28 21:29:27
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (1 / 10) | 1 ms | 1664 KB
Accepted | 1 * (2 / 10) | 1 ms | 1648 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (4 / 10) | 1 ms | 1692 KB

"""

#include <stdio.h>

int main()
{
	long long n, i, j;
	double e=1, ei;
	scanf("%lld", &n);
	
	if(n>17)
		n=17; 
	
	for(i=1; i<=n; i++)
	{
		ei = 1;
		for(j=1; j<=i; j++)
		{
			ei = ei*j; 
		}
		
		ei = 1.0/ei;
		e += ei;
	}
	
	printf("%.14lf\n", e);
	return 0;
}