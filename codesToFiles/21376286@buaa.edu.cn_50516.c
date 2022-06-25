"""
2022-03-27 11:52:55
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1628 KB
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1700 KB
Accepted | 1 * (2 / 10) | 2 ms | 1660 KB
Accepted | 1 * (4 / 10) | 2 ms | 1684 KB

"""

#include<stdio.h>
int main()
{
	int n,i,min,j;
	double sum=1.0,x=1.0;
	scanf("%d",&n);
	if(n>=20) min=20;
	else min=n;
	
	for(i=1;i<=min;i++)
	{ 
	   for(j=1;j<=i;j++)
	   {
	   	 x=x*j;
		   }
		sum+=(1/x);	
		x=1.0;
	}
	printf("%.14lf",sum);
}