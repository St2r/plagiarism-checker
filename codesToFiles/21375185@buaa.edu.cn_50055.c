"""
2022-03-26 21:12:17
AC
1.0
Accepted | 1 * (1 / 4) | 5 ms | 1664 KB
Accepted | 1 * (1 / 4) | 3 ms | 1668 KB
Accepted | 1 * (1 / 4) | 2 ms | 1628 KB
Accepted | 1 * (1 / 4) | 3 ms | 1712 KB

"""

#include<stdio.h>
#include<math.h>
int main(){
	long long  n,i;
	double x=1.0,e=1;
	scanf("%lld",&n);
	if(n>105){
		n=105;
	}
	for (i=1;i<=n;i++){
		x=x*1.0/i;
		e+=x;
	}
	printf("%.14lf",e);
	return 0;
}