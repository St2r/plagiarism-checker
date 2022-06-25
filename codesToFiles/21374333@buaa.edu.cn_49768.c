"""
2022-03-27 10:02:54
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1668 KB
Accepted | 1 * (1 / 10) | 2 ms | 1676 KB
Accepted | 1 * (2 / 10) | 2 ms | 1668 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (4 / 10) | 2 ms | 1640 KB

"""

#include <stdio.h>
int main()
{
	int n,i,j;
	double pi;
	double a=1;
	scanf("%d",&n);
	if(n<=17)
	{
		pi=1;
	    for(i=1;i<=n;i++)
	    {
		a=a*i;
	    pi=pi+1/a;
	    }
	    printf("%.14f\n",pi);
	}
	if(n>17)
	{
		printf("2.71828182845905\n");
	}
	return 0;
}