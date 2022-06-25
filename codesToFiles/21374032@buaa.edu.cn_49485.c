"""
2022-03-26 23:45:35
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1688 KB
Accepted | 1 * (1 / 10) | 2 ms | 1664 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1712 KB
Accepted | 1 * (4 / 10) | 2 ms | 1728 KB

"""

#include<stdio.h>
int main()
{
	long long int n,i,a[30];
	double sum;
	scanf("%lld",&n);
	a[0]=1,sum=1.0;
	if(n>=19)
	{
		for(i=1;i<=18;i++)
		{
			a[i]=i*a[i-1];
			sum+=1.0/(1.0*a[i]);
		}
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			a[i]=i*a[i-1];
			sum+=1.0/(1.0*a[i]);
		}
	}
	printf("%.14f",sum);
	return 0;
}