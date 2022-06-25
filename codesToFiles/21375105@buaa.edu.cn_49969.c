"""
2022-03-29 17:34:29
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1696 KB
Accepted | 1 * (1 / 10) | 2 ms | 1684 KB
Accepted | 1 * (2 / 10) | 2 ms | 1696 KB
Accepted | 1 * (2 / 10) | 2 ms | 1680 KB
Accepted | 1 * (4 / 10) | 2 ms | 1716 KB

"""

#include<stdio.h>
long long int factorial(int);
int main() {
	int n;
	double s, e = 1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		s = (double)1 / factorial(i);
		e = e + s;
		if(i>19){
		i=n;
		}

	}
	printf("%.14f", e);


}
long long int factorial( int i) {
	long long int s = 1;
	do {
		s = s * i;
		i--;
	} while (i > 0);
	return (s);
}