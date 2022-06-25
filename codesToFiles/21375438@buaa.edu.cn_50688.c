"""
2022-03-26 12:47:50
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (1 / 10) | 9 ms | 1664 KB
Accepted | 1 * (2 / 10) | 9 ms | 1612 KB
Accepted | 1 * (2 / 10) | 9 ms | 1608 KB
Accepted | 1 * (4 / 10) | 9 ms | 1612 KB

"""

#include <stdio.h>

int main()
{
	int n,i;
	double sum=1,r=1;
	scanf("%d",&n);
	if (n>=17) {
		for (i=1;i<=17;i++) {
			r*=1.0/i;
			sum+=r;
		}
	} else {
		for (i=1;i<=n;i++) {
			r*=1.0/i;
			sum+=r;
		}
	}
	printf("%.14f",sum);
	
	
	
	return 0;
}