"""
2022-03-29 20:39:48
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1728 KB
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (4 / 10) | 1 ms | 1712 KB

"""

#include <stdio.h>
int main()
{
	int n;
	double sum=1.0;
	double k=1.0;
	scanf("%d",&n);
	if(n>=20)
	{
		n=20;
	}
	for(int i=1;i<=n;i++)
	{
		k=1.0;
		for(int j=1;j<=i;j++)
		{
			k=k*j;
		}
		sum=sum+1.0/k;
	}
	printf("%.14lf",sum);
	return 0;
}