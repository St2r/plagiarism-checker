"""
2022-03-27 17:12:47
AC
1.0
Accepted | 1 * (1 / 4) | 3 ms | 1516 KB
Accepted | 1 * (1 / 4) | 3 ms | 1616 KB
Accepted | 1 * (1 / 4) | 2 ms | 1616 KB
Accepted | 1 * (1 / 4) | 2 ms | 1596 KB

"""

#include <stdio.h>
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