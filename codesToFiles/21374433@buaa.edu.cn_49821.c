"""
2022-03-28 22:04:14
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1632 KB
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1740 KB
Accepted | 1 * (4 / 10) | 1 ms | 1732 KB

"""

#include <stdio.h>

int main()
{
	int n, i, j;
	double num, k;
	num=1.0;
	scanf("%d",&n);
	for(i=1;(i<=n)&&(i<=32);i++){
		k=1.0;
		for(j=1;j<=i;j++)
			k=k*j;
		k=1.0/k;
		num=num+k;
	}
	printf("%.14f",num);
	return 0;
}