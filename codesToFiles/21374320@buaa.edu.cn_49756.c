"""
2022-03-28 18:49:25
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1700 KB
Accepted | 1 * (35 / 100) | 10 ms | 1652 KB
Accepted | 1 * (60 / 100) | 10 ms | 1652 KB

"""

#include <stdio.h>
#include <math.h>
#define eps pow(10,-14)
int main() {
	int n,i,j;	scanf("%d",&n);
	double e=1.0,tem=1.0;
	if(n>18)	{printf("2.71828182845905");}
	else 
	{
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			tem/=j;
		}
		e+=tem;
		if(tem<eps)
		{
			break;
		}
		else
		{
			tem=1.0;
		}
	}printf("%.14llf",e);
}
	
	return 0;
}