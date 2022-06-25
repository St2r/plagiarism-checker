"""
2022-03-28 22:52:01
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (1 / 10) | 0 ms | 1748 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (4 / 10) | 0 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
	int i, j, n;
	double m, sum;
	sum=1;
	scanf("%d", &n);
    if (n <= 18)
    {
        for(i=1; i<=n; i++)
        {
		    m=1;
		    for(j=1; j<=i; j++)
            {
			    m=m*j;
		    }
		    m=1.0/m;
		    sum=sum+m;
	    }
        printf("%.14f", sum);
    }
    else
    {
        printf("2.71828182845905");
    }
	return 0;
}