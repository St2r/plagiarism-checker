"""
2022-03-29 19:40:06
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1652 KB
Accepted | 1 * (1 / 10) | 1 ms | 1728 KB
Accepted | 1 * (2 / 10) | 0 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (4 / 10) | 1 ms | 1692 KB

"""

#include<stdio.h>
int main() {
	long long i,j=1,n;
	scanf("%lld",&n);
	double f=1;
	for(i=1;((i<=n)&&(i<=20));i++){
		j=j*i;
		f=f+1/(j*1.00);
	}
	printf("%.14lf",f);
	return 0;
}