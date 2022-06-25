"""
2022-03-28 22:49:45
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1736 KB
Accepted | 1 * (1 / 10) | 1 ms | 1640 KB
Accepted | 1 * (2 / 10) | 0 ms | 1716 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (4 / 10) | 1 ms | 1680 KB

"""

#include <stdio.h>
int main (){
	long long n,k,i;
	double e=1,a;
	scanf ("%lld",&n);
	if (n>=20){
		printf ("2.71828182845905");
		return 0;
	}else {
		for (k=1;k<=n;k++){
			for (i=1,a=1;i<=k;i++){
				a*=i;
			}
			e+=1.0/a;
		}
	}
	printf ("%.14lf",e);
	return 0;
}