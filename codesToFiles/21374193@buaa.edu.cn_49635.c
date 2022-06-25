"""
2022-03-26 11:10:39
AC
1.0
Accepted | 1 * (1 / 10) | 10 ms | 1680 KB
Accepted | 1 * (1 / 10) | 12 ms | 1612 KB
Accepted | 1 * (2 / 10) | 14 ms | 1600 KB
Accepted | 1 * (2 / 10) | 11 ms | 1596 KB
Accepted | 1 * (4 / 10) | 14 ms | 1676 KB

"""

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#define ll long long
#define maxn +1145141919
#define eps 1e-10

double wuhu(int a) {
	int i;
	double sum = 1;
	for (i = 1; i <= a; i++) {
		sum /= (1.0 * i);
	}
	return sum;
}

int main(void) {
	int n, i;
	double e = 1;
	scanf("%d", &n);
	for (i = 1; i <= n&&i<=18; i++) {
		e += wuhu(i);
	}
	printf("%.14lf", e);


	return 0;
}