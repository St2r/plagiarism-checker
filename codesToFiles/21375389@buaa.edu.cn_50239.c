"""
2022-03-29 09:40:37
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (1 / 10) | 1 ms | 1752 KB
Accepted | 1 * (2 / 10) | 0 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1740 KB
Accepted | 1 * (4 / 10) | 1 ms | 1656 KB

"""

#include<stdio.h>
int main()
{
	long long n,j;
	int a[100000],i;
	double ans=1;
	scanf("%lld",&n);
	if(n>20) n=20;
	j=1;
	for(i=1;i<=n;i++)
	{
		ans+=1.0*1/j/i;
		j=j*i;
	}
	printf("%.14f",ans);
	
	
	
}