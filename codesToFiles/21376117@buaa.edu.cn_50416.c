"""
2022-03-26 16:36:29
AC
1.0
Accepted | 1 * (1 / 10) | 9 ms | 1556 KB
Accepted | 1 * (1 / 10) | 9 ms | 1648 KB
Accepted | 1 * (2 / 10) | 13 ms | 1628 KB
Accepted | 1 * (2 / 10) | 8 ms | 1648 KB
Accepted | 1 * (4 / 10) | 9 ms | 1596 KB

"""

#include <stdio.h>
int main()
{
	long long n,i;
    double e=2,x[17],y[17];
    scanf("%lld",&n);
    if(n<=16)
	{
	for(i=2;i<=n;i++)
    {
	  x[1]=1;
	  x[i]=x[i-1]*i;
	  y[i]=1/x[i];
	  e+=y[i];
    }
    
    printf("%.14f",e);
    }
    else
    printf("2.71828182845905");
    return 0;
}