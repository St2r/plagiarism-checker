"""
2022-03-29 22:39:26
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (1 / 10) | 0 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1756 KB
Accepted | 1 * (2 / 10) | 1 ms | 1712 KB
Accepted | 1 * (4 / 10) | 0 ms | 1728 KB

"""

#include<stdio.h>

long long f(int n);
int main()
{
	int n,i;
	scanf("%d",&n);
	double sum=0;
	
	if(n>17) n=17;
	
	for(i=0;i<=n;i++)
	{
		sum=sum+(1.0/f(i));
	}
	
	printf("%.14f",sum);
	
	return 0;
	
}

long long f(int n)
{
	if(n<1) return 1LL;
	else
	return n*f(n-1);
}