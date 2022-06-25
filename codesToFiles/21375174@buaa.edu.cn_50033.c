"""
2022-03-29 12:17:42
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 0 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1676 KB
Accepted | 1 * (4 / 10) | 1 ms | 1688 KB

"""

#include<stdio.h>
int main()
{
	int n,i;
	long long m=1;
	double M,sum=0;
	scanf("%d",&n);
	if(n<=20)
	for(i=1;i<=n;i++)
	{
		m=m*i;
		M=1.0/m;
		sum=sum+M;
	}
	else
	for(i=1;i<=20;i++)
	{
		m=m*i;
		M=1.0/m;
		sum=sum+M;
	}
	printf("%.14f",sum+1);
	return 0;
}