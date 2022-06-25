"""
2022-03-27 10:03:06
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1716 KB
Accepted | 1 * (1 / 10) | 2 ms | 1668 KB
Accepted | 1 * (2 / 10) | 3 ms | 1616 KB
Accepted | 1 * (2 / 10) | 3 ms | 1660 KB
Accepted | 1 * (4 / 10) | 2 ms | 1676 KB

"""

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>

int main(){
	double e=1,n,i,j,k,x=1,y,z;
	scanf("%lf",&n);
	if(n>16)
	{
		printf("2.71828182845905");
	}
	
	else
	{
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			x=x*j;	
		}
		
		e=e+1/x;
		x=1;
	}
	printf("%.14lf",e);
	
	}	
	
	return 0;
}