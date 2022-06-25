"""
2022-03-29 13:27:27
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1756 KB
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 0 ms | 1656 KB
Accepted | 1 * (4 / 10) | 1 ms | 1756 KB

"""

#include<stdio.h>
int main()
{
	 int n,i;
	double e = 0,k = 1;
	scanf("%d",&n);
	for(i = 1;i <= n && i <= 17 ;i++)
	{
		k *= i;
		e += 1.0/ k;
	}
	printf("%.14lf",e + 1);
	return 0;
}