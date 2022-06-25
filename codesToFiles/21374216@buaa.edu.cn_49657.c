"""
2022-03-28 22:51:42
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1632 KB
Accepted | 1 * (1 / 10) | 1 ms | 1728 KB
Accepted | 1 * (2 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 0 ms | 1736 KB
Accepted | 1 * (4 / 10) | 1 ms | 1736 KB

"""

#include<stdio.h>
int main()
{
	int n;
	double sum=1,a=1;
	int i=0;
	scanf("%d",&n);
	if(n>17)
	n=17;
	for(i=1;i<=n;i++)
	{
	a=1.0*a/i;
	sum+=a;
	}
	printf("%.14lf",sum);
	return 0;
}