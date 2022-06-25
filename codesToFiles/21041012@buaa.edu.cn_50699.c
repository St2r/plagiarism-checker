"""
2022-03-29 20:44:31
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1724 KB
Accepted | 1 * (1 / 10) | 2 ms | 1720 KB
Accepted | 1 * (2 / 10) | 7 ms | 1664 KB
Accepted | 1 * (2 / 10) | 2 ms | 1608 KB
Accepted | 1 * (4 / 10) | 2 ms | 1684 KB

"""

#include  <stdio.h>
int main()
{
	double p,n,i,j,q,m;
	scanf("%lf",&n);
	if(n>20)
	printf("2.71828182845905");
	else
	{
	for(j=1.0;j<=n;j++)
    { 
	 double a=1.0;
	 for(i=1.0;i<=j;i++)
     {
	 a*=i; 
     p=1/a;
	 } 
	     q+=p;
	 }
	     m=q+1;
     printf("%.14f",m);
	 }
	 return 0;
}