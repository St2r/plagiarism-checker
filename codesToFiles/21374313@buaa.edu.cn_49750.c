"""
2022-03-27 00:09:38
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1664 KB
Accepted | 1 * (1 / 10) | 9 ms | 1704 KB
Accepted | 1 * (2 / 10) | 9 ms | 1624 KB
Accepted | 1 * (2 / 10) | 9 ms | 1708 KB
Accepted | 1 * (4 / 10) | 8 ms | 1716 KB

"""

#include<stdio.h>
int main()
{
	int n,i;
	double a = 1.0;
	double e=1.0;
	scanf("%d",&n);
	if(n>100)
		n=100;
	for(i=1;i<n+1;i++)
	{
	    a*=1.0*1/i;
		e+=a;
	}
	printf("%.14f",e);
	return 0;
}