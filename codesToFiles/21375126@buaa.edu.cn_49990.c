"""
2022-03-26 13:08:47
AC
1.0
Accepted | 1 * (1 / 10) | 3 ms | 1620 KB
Accepted | 1 * (1 / 10) | 2 ms | 1620 KB
Accepted | 1 * (2 / 10) | 2 ms | 1728 KB
Accepted | 1 * (2 / 10) | 2 ms | 1660 KB
Accepted | 1 * (4 / 10) | 2 ms | 1628 KB

"""

#include<stdio.h>
int main()
{
	int n,j,i=1;
	scanf("%d",&n);
	double b=1,sum=1;
	double g=1e-15;
	for(i=1;i<=n&&b>g;i++){
		b/=i;
		sum+=b;
	}
	printf("%.14f",sum);
	return 0;
}