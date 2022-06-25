"""
2022-03-29 18:19:04
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1676 KB
Accepted | 1 * (1 / 10) | 1 ms | 1716 KB
Accepted | 1 * (2 / 10) | 1 ms | 1712 KB
Accepted | 1 * (2 / 10) | 0 ms | 1652 KB
Accepted | 1 * (4 / 10) | 1 ms | 1680 KB

"""

#include <stdio.h>
int main ( ) {
	int n;
	double e=1,a=1;
	scanf ("%d",&n);
	if (n>16){
		printf("2.71828182845905");
		return 0;
	}
	for(int k=1;k<=n;k++){
		
		a *= 1.0/k;
		
		e += a;
	}
	printf("%.14f",e);
	return 0; 
}