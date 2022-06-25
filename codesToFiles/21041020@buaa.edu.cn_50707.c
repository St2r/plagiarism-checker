"""
2022-03-26 14:33:13
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (2 / 10) | 3 ms | 1660 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (4 / 10) | 2 ms | 1608 KB

"""

#include <stdio.h>

int main()
{
	int  i, j;
	long long n, a;
	double sum = 1;
	scanf("%lld", &n);
	if ( n >= 21 ){
		for( i = 1; i <= 18; i ++){
			a = 1;
			for ( j = 1; j <= i; j++){
				a = a * j;
			}
			sum = sum + 1.0 / a;
		}
	}
	else {
		for( i = 1; i <= n ; i ++){
			a = 1;
			for ( j = 1; j <= i; j++){
				a = a * j;
			}
			sum = sum + 1.0 / a;
		}
	}
	printf("%.14f", sum);
	return 0;
}