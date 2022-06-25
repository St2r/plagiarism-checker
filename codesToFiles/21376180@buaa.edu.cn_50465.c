"""
2022-03-26 13:31:09
AC
1.0
Accepted | 1 * (1 / 10) | 12 ms | 1660 KB
Accepted | 1 * (1 / 10) | 14 ms | 1624 KB
Accepted | 1 * (2 / 10) | 15 ms | 1648 KB
Accepted | 1 * (2 / 10) | 3 ms | 1704 KB
Accepted | 1 * (4 / 10) | 10 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
	int n;
	double sum = 1, t=1;
	scanf("%d", &n);
	if(n<17)
	{
		for(int i=1;i<=n;i++)
	    {
		    t = t/i;
		    sum = sum + t;
	    }
	    printf("%.14f", sum);
	}
	else printf("2.71828182845905");
	return 0;
}