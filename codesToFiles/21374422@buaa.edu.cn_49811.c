"""
2022-03-26 16:35:01
AC
1.0
Accepted | 1 * (1 / 100) | 3 ms | 1652 KB
Accepted | 1 * (39 / 100) | 3 ms | 1624 KB
Accepted | 1 * (60 / 100) | 3 ms | 1624 KB

"""

#include<stdio.h>
int main(void) {
	int n, i, j;
	double sum=1.0,sum1=1.0,jc;
	scanf("%d", &n);
	for (i = 1;i <=n;i++) {
		if (i >= 45) {
			break;
		}
		for (j = 1;j<=i;j++) {
			jc = j;
			sum *= jc;
		}
		sum = 1 / sum;
		sum1 += sum;
		sum = 1.0;
	}
	printf("%.14lf", sum1);
	return 0;
}