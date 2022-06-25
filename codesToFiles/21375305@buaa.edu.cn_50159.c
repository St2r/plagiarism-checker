"""
2022-03-28 17:01:07
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (1 / 10) | 8 ms | 1660 KB
Accepted | 1 * (2 / 10) | 4 ms | 1708 KB
Accepted | 1 * (2 / 10) | 2 ms | 1724 KB
Accepted | 1 * (4 / 10) | 2 ms | 1624 KB

"""

#include<stdio.h>
int main()
{
	int n,i;
	double ij=1;
	double sum=1;
	scanf("%d",&n);
	for(i=1;i<=n&&i<=17;i++)
	{
		ij/=i;
		sum+=(ij);
	}
	printf("%.14f",sum);
	return 0;
}