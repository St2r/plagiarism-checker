"""
2022-03-29 16:59:37
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1652 KB
Accepted | 1 * (1 / 10) | 0 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1636 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (4 / 10) | 0 ms | 1680 KB

"""

#include <stdio.h>
#include <math.h>
int main(){
	long long int n,i;
	double b,m;
	scanf("%lld",&n);
	b=1;
	m=1;
	for(i=1;i<n+1&&i<=17;i++){
		m=m*i;
		b=b+1.0*(1/m); 
	}printf("%.14f",b);
 return 0;
}