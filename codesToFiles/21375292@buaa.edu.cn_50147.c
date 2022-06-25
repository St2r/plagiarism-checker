"""
2022-03-29 19:51:27
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1748 KB
Accepted | 1 * (2 / 10) | 0 ms | 1656 KB
Accepted | 1 * (4 / 10) | 0 ms | 1676 KB

"""

#include <stdio.h>
int main()
{
	int n, i, j;
	double a, b, eps=1e-15, r, c;
	b=0;
	scanf("%d", &n);
	for(r=i=1;i<=n;i++){
			c=b;
			r*=i;
			a=1.0/r;
			b=b+a;
			if((b-c)<eps){
				break;
			}
	}
	printf("%.14f", b+1);
	return 0;
}