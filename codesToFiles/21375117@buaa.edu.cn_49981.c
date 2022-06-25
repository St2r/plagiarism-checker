"""
2022-03-27 11:25:37
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1640 KB
Accepted | 1 * (1 / 10) | 2 ms | 1712 KB
Accepted | 1 * (2 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1664 KB
Accepted | 1 * (4 / 10) | 2 ms | 1632 KB

"""

#include <stdio.h>
#include <string.h>
int main()
{
	long long n,i,div=1;
	double e=1;
	scanf("%lld",&n);
	
	
	for(i=1;(i<=n)&&(i<=18);i++)
	{
		div*=i;
		e+=1.0/div;
	}
	printf("%.14f",e);
    return 0;
}