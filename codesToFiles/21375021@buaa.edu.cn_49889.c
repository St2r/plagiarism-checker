"""
2022-03-29 21:21:22
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1692 KB
Accepted | 1 * (1 / 10) | 1 ms | 1712 KB
Accepted | 1 * (2 / 10) | 1 ms | 1636 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (4 / 10) | 1 ms | 1660 KB

"""

#include <stdio.h>
#include <math.h>
int main()
{
	int n=0;
	int i,j;
    double e=1;
	long long ans=1;
	scanf("%d",&n);
	if(n<=17)
	{
	for(i=1;i<=n;i++)
	{
	     for(ans=1,j=1;j<=i;j++)
	     {
		 	ans*=j;
		 }
		 long double lans=1.0/ans;
		 e+=lans;
	}
	
	printf("%.14f\n",e);
	}
	else
	printf("2.71828182845905\n");
	return 0;
}