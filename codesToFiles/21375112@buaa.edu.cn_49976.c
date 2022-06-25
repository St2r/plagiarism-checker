"""
2022-03-29 23:18:19
WA
0.4
Accepted | 1 * (1 / 10) | 1 ms | 1752 KB
Accepted | 1 * (1 / 10) | 1 ms | 1640 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Wrong Answer | 0 * (2 / 10) | 1 ms | 1656 KB
Wrong Answer | 0 * (4 / 10) | 1 ms | 1648 KB

"""

#include <stdio.h>
int main()
{
	int i,n,a[20];
	a[0]=1;
	double x=1.0;
	scanf("%d",&n);
	if(n>20)
	{
		n=20;
	}
	for(i=1;i<=n;i++)
	{
		a[i]=a[i-1]*i;
	}
	for(i=1;i<=n;i++)
	{
		x+=(double)1/a[i];
	}
	printf("%0.14lf",x);
	return 0;
}