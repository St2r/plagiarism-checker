"""
2022-03-26 20:53:43
AC
1.0
Accepted | 1 * (1 / 10) | 3 ms | 1616 KB
Accepted | 1 * (1 / 10) | 3 ms | 1704 KB
Accepted | 1 * (2 / 10) | 3 ms | 1604 KB
Accepted | 1 * (2 / 10) | 3 ms | 1668 KB
Accepted | 1 * (4 / 10) | 3 ms | 1652 KB

"""

#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,j;
	double m=1.0,k=1.0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			k*=(double)1/j;
		}
		m+=(double)k;
		k=1.0;
		if(i>17)
		break;
	}
	printf("%.14lf",m);
	return 0;
}