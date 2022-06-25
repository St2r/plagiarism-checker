"""
2022-03-29 19:27:17
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1660 KB
Accepted | 1 * (1 / 10) | 1 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1744 KB
Accepted | 1 * (4 / 10) | 1 ms | 1716 KB

"""

#include<stdio.h>
int main()
{
	int n,i;
	double a=1,b=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=a/i;
	    b=b+a;
	    if(i>=20)
	    break;
    }
    printf("%.14lf",b);
    return 0;
 }