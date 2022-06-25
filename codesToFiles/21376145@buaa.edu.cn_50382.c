"""
2022-03-26 16:47:25
AC
1.0
Accepted | 1 * (1 / 10) | 4 ms | 1660 KB
Accepted | 1 * (1 / 10) | 2 ms | 1712 KB
Accepted | 1 * (2 / 10) | 3 ms | 1724 KB
Accepted | 1 * (2 / 10) | 2 ms | 1728 KB
Accepted | 1 * (4 / 10) | 2 ms | 1668 KB

"""

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n,i,j;
    double e=1.0,mashiro=1.0;
    scanf("%d",&n);
    if(n>17)
    n=17;
    for(i=1;i<=n;++i)
    {
		mashiro=(double)mashiro/i;
		
		e+=mashiro;
    }
    printf("%.14lf",e);
	return 0;
}