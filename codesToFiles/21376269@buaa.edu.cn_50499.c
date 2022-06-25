"""
2022-03-29 21:06:25
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1680 KB
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1756 KB
Accepted | 1 * (4 / 10) | 0 ms | 1652 KB

"""

#include <stdio.h>

int main() 
{
	int n,i=1;
	double e=1,j=1,a=1;
	scanf("%d",&n);
	if(n<=20)
	{
    while(i<=n)
	{
	    while(j<=i)
        {
		    a=a*(1/j);
		    j++; 
	    }
        e=e+a;
        i++;
	}
	printf("%.14f",e);
    }
    else
    printf("2.71828182845905");
	return 0;
}