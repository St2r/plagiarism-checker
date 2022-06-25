"""
2022-03-29 20:21:53
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 0 ms | 1752 KB
Accepted | 1 * (2 / 10) | 1 ms | 1740 KB
Accepted | 1 * (4 / 10) | 1 ms | 1660 KB

"""

#include <stdio.h>
int main ()
{
	long long n,i;
	double e=1,sum=1;
	scanf("%lld",&n);
	for(i=1;i<=n;i++){
		sum=sum*i;
		if(sum>=1000000000000000)
		break;
		e=1/sum+e;
	}
	printf("%.14f",e);
	return 0;
}