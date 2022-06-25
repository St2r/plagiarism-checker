"""
2022-03-28 23:06:59
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (1 / 10) | 0 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 0 ms | 1740 KB
Accepted | 1 * (4 / 10) | 1 ms | 1688 KB

"""

#include<stdio.h>

int main()
{
	int n,i,j;
	double e=1,x=1;
	
	scanf("%d",&n);
	for (i=1;i<=n&&i<=19;i++){
		for (j=1;j<=i;j++){
			x*=j;
		}
		e+=1/(1.0*x);
		x=1;
	}
	printf("%.14f\n",e);
	
	return 0;
}