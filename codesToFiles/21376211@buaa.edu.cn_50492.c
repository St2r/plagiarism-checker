"""
2022-03-26 15:04:46
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1716 KB
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (4 / 10) | 2 ms | 1544 KB

"""

#include<stdio.h>
int main()
{
	int n, i, j;
	double e, r;
	scanf("%d",&n);
	if(n<=17)
	{
	
		for(i=1;i<=n;i++)
		{
		for(r=j=1;j<=i;j++)
		r*=j;
		e=e+1/r;
		}
	
	printf("%.14f",e+1);}
	if(n>17)
	printf("2.71828182845905");
	
		return 0;
}