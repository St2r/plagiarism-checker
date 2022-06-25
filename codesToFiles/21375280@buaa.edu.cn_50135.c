"""
2022-03-26 13:57:05
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1644 KB
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 3 ms | 1644 KB
Accepted | 1 * (2 / 10) | 2 ms | 1624 KB
Accepted | 1 * (4 / 10) | 2 ms | 1640 KB

"""

#include <stdio.h>
double plus( int n ) {
	double output=1;
	for( int i=1;i<=n;i++ ) {
		output*=1.0/i;
	}
	return output;
}
int main()
{
	int n;
	double e=1;
	scanf("%d",&n);
	if( n<=18 ) {
		for( int i=1;i<=n;i++ ) {
			e+=plus(i);
		}
	} else {
		for( int i=1;i<=18;i++) {
			e+=plus(i);
		}
	}
	printf("%.14lf",e);
	return 0;
}