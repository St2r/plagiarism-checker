"""
2022-03-29 22:20:32
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1756 KB
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 0 ms | 1720 KB
Accepted | 1 * (2 / 10) | 0 ms | 1712 KB
Accepted | 1 * (4 / 10) | 1 ms | 1752 KB

"""

#include <stdio.h>

int main() 
{
	int n, i;
 	long long l;
 	double sum;
 	sum = 1;
 	scanf("%d", &n);
 	if (n >= 17)
  	n = 17;
 	for (l = i = 1; i <= n; i++) {
  		l *= i;
  		sum += 1.0 / (double)l;
 	}
 	printf("%.14lf", sum);

 return 0;
}