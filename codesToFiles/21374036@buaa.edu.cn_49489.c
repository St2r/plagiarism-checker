"""
2022-03-29 19:33:44
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1756 KB
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (4 / 10) | 1 ms | 1748 KB

"""

#include <stdio.h> 
int main()
{
	long long int n,i,r=1;
	double sum=1,j=1,m;
	scanf("%lld",&n);
	
	for(i=1;i<=n&&i<=17;)
	{ 
		for(r=j=1;j<=i;j++)
		{
			r=r*j;
		}
			m=1/(double)r;
			sum=sum+m;
		i=i+1;
	}
	printf("%.14f",sum);
	return 0;
}