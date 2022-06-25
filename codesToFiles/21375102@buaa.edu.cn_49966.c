"""
2022-03-29 21:03:37
WA
0.6
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (1 / 10) | 0 ms | 1756 KB
Accepted | 1 * (2 / 10) | 1 ms | 1664 KB
Accepted | 1 * (2 / 10) | 1 ms | 1692 KB
Wrong Answer | 0 * (4 / 10) | 1 ms | 1756 KB

"""

#include<stdio.h>
int main()
{
	long long int n,i,j=1;
	double e=1,k;
	scanf("%lld",&n);
	for(i=1;i<(n+1)&&i<16;i++){
		j=j*i;
		k=1.0/j;
		e=e+k;
	}
	printf("%.14f",e);
	return 0;
 }