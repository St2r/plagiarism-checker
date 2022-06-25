"""
2022-03-27 20:51:29
AC
1.0
Accepted | 1 * (1 / 5) | 3 ms | 1700 KB
Accepted | 1 * (1 / 5) | 2 ms | 1544 KB
Accepted | 1 * (1 / 5) | 3 ms | 1696 KB
Accepted | 1 * (1 / 5) | 12 ms | 1704 KB
Accepted | 1 * (1 / 5) | 8 ms | 1568 KB

"""

#include <stdio.h>
int main(){
	long long n,i=1;
	double a=1,e=1;
	scanf("%lld",&n);
	if(n>17)
	printf("2.71828182845905");
	else
	{
		while(i<=n)
		{
			a=a*(1.0/i);
			e+=a;
			i++;
		}
		printf("%.14f",e);
	}
	return 0;
}