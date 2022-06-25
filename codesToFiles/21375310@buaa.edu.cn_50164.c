"""
2022-03-29 12:13:21
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1716 KB
Accepted | 1 * (1 / 10) | 1 ms | 1632 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 1 ms | 1744 KB
Accepted | 1 * (4 / 10) | 0 ms | 1636 KB

"""

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
	int n;
	scanf("%d",&n);
	double sum=0;
	for(int j=1;j<=n&&j<=17;j++)
	{double k=1;
	for(int i=1;i<=j;i++)
	{
		k*=(double)1/i;
	}
	sum+=k;
    }
    printf("%.14f",sum+1);
    return 0;
}