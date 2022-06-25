"""
2022-03-29 23:24:26
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 0 ms | 1636 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (4 / 10) | 1 ms | 1744 KB

"""

#include<stdio.h>
int main() {
	double n,i,j,e=1;
	scanf("%lf",&n);
	for(i=1; i<=17&&i<=n; i++) {
		double b=1;
		for(j=1; j<=i; j++) {
			b*=j;
		}
		e+=1/b;
	}
	printf("%.14f",e);
	return 0;
}