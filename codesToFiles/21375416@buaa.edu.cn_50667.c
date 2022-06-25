"""
2022-03-28 20:59:55
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1688 KB
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1684 KB
Accepted | 1 * (4 / 10) | 1 ms | 1728 KB

"""

#include<stdio.h>
int main()
{
	double c=1,b=1,n,i;
	scanf("%lf",&n);
	if(n>16)
	{
		printf("2.71828182845905");
		return 0;
	}
	for(i=1;i<=n;i++)
	{
		b=b*i;
	    c=c+1/b;
	    
	}
	printf("%.14lf",c);
 }