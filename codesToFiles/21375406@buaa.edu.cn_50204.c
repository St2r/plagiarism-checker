"""
2022-03-28 21:29:50
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1692 KB
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1740 KB
Accepted | 1 * (2 / 10) | 0 ms | 1644 KB
Accepted | 1 * (4 / 10) | 1 ms | 1688 KB

"""

#include <stdio.h>
int main()
{
	int n;
	double i, num = 1, e = 1;
	scanf("%d", &n);
	if(n<=17)
	{
        for(i=1; i<=n; i++)
	    {
	        num = num / i;
	        e += num;
        }
	    printf("%.14f", e);
    }
	else
	    printf("2.71828182845905");	
    return 0;
 }