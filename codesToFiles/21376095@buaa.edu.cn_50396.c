"""
2022-03-29 21:14:04
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1716 KB
Accepted | 1 * (1 / 10) | 1 ms | 1636 KB
Accepted | 1 * (2 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 0 ms | 1752 KB
Accepted | 1 * (4 / 10) | 1 ms | 1680 KB

"""

#include <stdio.h>

int main()
{
    int n,i;
    double e,x;
    e=1;
    x=1;
	scanf("%d",&n);
	if(n<=18)
	{
	for(i=1;i<=n;i++)
	{
		e*=i;
		x=x+1.0/e;
	 } 
	printf("%.14lf",x);
	}
	else
	{
		printf("2.71828182845905");
	}

    return 0;
}