"""
2022-03-26 16:33:11
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (1 / 10) | 2 ms | 1696 KB
Accepted | 1 * (2 / 10) | 2 ms | 1560 KB
Accepted | 1 * (2 / 10) | 2 ms | 1700 KB
Accepted | 1 * (4 / 10) | 2 ms | 1656 KB

"""

#include<stdio.h>
int main()
{
long long int n,k,i,j=1;
	double sum=1.0;
	scanf("%lld",&n);
	if(n>20)
	n=20;
	for(i=1;i<=n;i++)
	{
		j*=i; 
		sum+=(1.0/(1.0*j));
	}
	printf("%.14lf",sum);
	 return 0;
}