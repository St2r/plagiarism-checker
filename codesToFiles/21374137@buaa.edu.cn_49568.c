"""
2022-03-29 21:22:48
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1676 KB
Accepted | 1 * (1 / 10) | 1 ms | 1728 KB
Accepted | 1 * (2 / 10) | 1 ms | 1728 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (4 / 10) | 1 ms | 1740 KB

"""

#include <stdio.h>
int main()
{
	int n;
	double sum=1;
	scanf("%d",&n);
	if(n>=20)
	{
		printf("2.71828182845905\n");
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		unsigned long long multiply=1;
		double k;
		for(int j=2;j<=i;j++)
		{
			multiply*=j;
		}
		k=1.0/multiply;
		sum+=k;
	}
	printf("%.14f\n",sum);
	return 0;
}