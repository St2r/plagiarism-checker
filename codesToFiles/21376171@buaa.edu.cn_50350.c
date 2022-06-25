"""
2022-03-28 19:38:15
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1732 KB
Accepted | 1 * (1 / 10) | 1 ms | 1748 KB
Accepted | 1 * (2 / 10) | 0 ms | 1756 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (4 / 10) | 1 ms | 1584 KB

"""

#include <stdio.h>
int main(){
	long long n;
	scanf("%lld",&n);
	double e=1.0;
	long long i,j;
	if (n>=18){
		printf("2.71828182845905");
	}
	else{
	for (i=1,j=1;i<=n;i++){
		j = j*i;
		e = e + 1.0*1/j;
	}
	printf("%.14lf",e);}
	return 0;
}