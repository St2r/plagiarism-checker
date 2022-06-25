"""
2022-03-28 19:52:53
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1680 KB
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1640 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (4 / 10) | 0 ms | 1632 KB

"""

#include<stdio.h>
int main()
{
	int n; double factorial = 1;
	double sum=1;
	scanf("%d",&n);if (n>17) n=17;
	for(int i=1;i<=n;i++){
		factorial *= i;
		sum += 1.0 / factorial;
	}
	printf("%.14lf",sum);
    return 0;
}