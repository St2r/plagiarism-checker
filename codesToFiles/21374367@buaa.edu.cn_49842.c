"""
2022-03-26 12:48:26
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1716 KB
Accepted | 1 * (1 / 10) | 2 ms | 1708 KB
Accepted | 1 * (2 / 10) | 2 ms | 1660 KB
Accepted | 1 * (2 / 10) | 2 ms | 1644 KB
Accepted | 1 * (4 / 10) | 9 ms | 1668 KB

"""

#include <stdio.h>
int main()
{
	int n,i,j,k;
    double sum,e=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   sum=1;
    	for(j=1;j<=i;j++)
    	{ sum*=(1.0/j);
		}
		if(sum==0)
			break;
		e+=sum;
	}printf("%.14lf",e+1);
}