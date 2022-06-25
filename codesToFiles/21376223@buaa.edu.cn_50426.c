"""
2022-03-28 22:22:50
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1664 KB
Accepted | 1 * (1 / 10) | 0 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1636 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (4 / 10) | 1 ms | 1632 KB

"""

#include<stdio.h>
int main()
{
	double i,j,n,sum=0;
	double r;
	scanf("%lf",&n);
	for(i=1;i<=n;i++){
		for(r=j=1;j<=i;j++)
		r=r*j;
		sum=sum+1/r;
		if(1/r<1e-15)  break;
	}
	printf("%.14lf\n",sum+1.0);
	return 0;
}