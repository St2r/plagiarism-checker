"""
2022-03-28 12:51:10
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (2 / 10) | 2 ms | 1660 KB
Accepted | 1 * (2 / 10) | 2 ms | 1676 KB
Accepted | 1 * (4 / 10) | 2 ms | 1612 KB

"""

#include<stdio.h>

int main()
{
	int m,n,p;
	double q,e=1;
	scanf("%d",&n);
	if(n>=20)
	{
		printf("%.14f",2.71828182845905);
		return 0;
	}
	for(m=1;m<=n;m++)
	{
		q=1;
		for(p=1;p<=m;p++)
		{
			q*=p;
			
		}
		q=1/q;
		e+=q;
	}
	printf("%.14f",e);
	return 0;
}