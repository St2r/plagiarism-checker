"""
2022-03-26 19:17:10
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1668 KB
Accepted | 1 * (1 / 10) | 2 ms | 1676 KB
Accepted | 1 * (2 / 10) | 2 ms | 1708 KB
Accepted | 1 * (2 / 10) | 2 ms | 1668 KB
Accepted | 1 * (4 / 10) | 2 ms | 1616 KB

"""

#include <stdio.h>

int main ()
{
	int n,i,j;
	double e=1,k=1;
	scanf("%d",&n);
	if(n<=18)
	{
	
	for(i=1;i<=n;i++)
	{
		k*=(double)1/i;
		e+=k;
	}
	printf("%.14f",e);
    }
    else
    {
    	printf("2.71828182845905");
	}
	return 0;
}