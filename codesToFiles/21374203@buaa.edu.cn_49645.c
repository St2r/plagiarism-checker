"""
2022-03-26 20:37:31
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (1 / 10) | 2 ms | 1716 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (4 / 10) | 2 ms | 1624 KB

"""

#include<stdio.h>
int main() 
{	int n,i,k;;
	double e,m;
	scanf("%d",&n);
	if(n<=20)
	for(i=1,e=1;i<=n;i++)
	{
		for(k=1,m=1;k<=i;k++)
		{
			m=m*k;
		}
		e=e+1/m;}
	else if(n>20)
	for(i=1,e=1;i<=20;i++)
	{
		for(k=1,m=1;k<=i;k++)
		{
			m=m*k;
		}
		e=e+1/m;}
	
	printf("%.14f",e);
	return 0;
}