"""
2022-03-26 10:56:25
AC
1.0
Accepted | 1.0 * (3 / 15) | 12 ms | 1592 KB
Accepted | 1.0 * (2 / 15) | 3 ms | 1596 KB
Accepted | 1.0 * (4 / 15) | 2 ms | 1592 KB
Accepted | 1.0 * (1 / 15) | 2 ms | 1600 KB
Accepted | 1.0 * (5 / 15) | 2 ms | 1596 KB

"""

#include <stdio.h>
#include <math.h>
#include <string.h>

double fac(double n){
	double a=1.0;
	for(double i=n;i>0;i--){
		a*=i;
	}
	return a;
}

int main(){
	int n;
	double e=1.0;
	scanf("%d",&n);
	for(double i=1.0;i<=n;i++){
	e=e+1/fac(i);
	}
	printf("%.14llf",e);
	return 0;
}