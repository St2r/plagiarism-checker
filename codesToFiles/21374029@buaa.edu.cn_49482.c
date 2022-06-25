"""
2022-03-29 18:28:02
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1704 KB
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1700 KB
Accepted | 1 * (4 / 10) | 2 ms | 1680 KB

"""

#include<stdio.h>
#include <ctype.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
long long n,ans;
int i,j;
double e=1.0;
int main() 
{
	scanf("%lld",&n);
	if(n>40)
	n=40; 
	for(i=1;i<=n;i++)
	{
		ans=1.0;
		for(j=1;j<=i;j++)
		{
			ans*=j;
		}
		e+=(1.0/ans);
	}
	printf("%.14f",e);
	return 0;
}