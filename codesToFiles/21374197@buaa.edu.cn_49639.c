"""
2022-03-29 14:33:10
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1664 KB
Accepted | 1 * (1 / 10) | 1 ms | 1712 KB
Accepted | 1 * (2 / 10) | 1 ms | 1716 KB
Accepted | 1 * (2 / 10) | 1 ms | 1664 KB
Accepted | 1 * (4 / 10) | 0 ms | 1660 KB

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