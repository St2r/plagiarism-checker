"""
2022-03-29 23:12:42
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (1 / 10) | 0 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1652 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (4 / 10) | 0 ms | 1736 KB

"""

#include <stdio.h>
int main(){
	long long n,i,r;
	double e;
	e = 1.0;
	scanf("%lld",&n);
	for(r=i=1;i<=n;i++){
		r *= i;
		e += 1.0/r;
		if(i==18) break;
	}printf("%.14lf",e);
	return 0;
}