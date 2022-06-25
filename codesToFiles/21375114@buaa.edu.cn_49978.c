"""
2022-03-29 21:59:29
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1716 KB
Accepted | 1 * (1 / 10) | 1 ms | 1712 KB
Accepted | 1 * (2 / 10) | 1 ms | 1640 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (4 / 10) | 1 ms | 1640 KB

"""

#include <stdio.h>
int main(){
	long long n,i;
	double e=0;
	scanf("%lld",&n);
	if(n>30) n=30;
	long long x[n];
	for(i=1,x[0]=1;i<=n;i++) {
		x[i]=x[i-1]*i;
		e=e+1.0/x[i];
	}
	printf("%.14f",1+e);
}