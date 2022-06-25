"""
2022-03-28 22:21:10
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1692 KB
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (2 / 10) | 1 ms | 1756 KB
Accepted | 1 * (2 / 10) | 1 ms | 1716 KB
Accepted | 1 * (4 / 10) | 1 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
	double n,i,j,b,e;
//a为阶乘值，b为其倒数。 
	scanf("%lf",&n); 
    if(n>=40)
    n=20;	
	e=1;	
	for(i=1;i<=n;i++)
	{
		long long a=1;
		for(j=1;j<=i;j++)
	    {
	     	a=a*j;
		 }
		b=1.0/a;
		e=e+b;
	}
	printf("%.14f",e);
	
	return 0;
 }