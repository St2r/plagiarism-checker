"""
2022-03-26 23:13:54
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1700 KB
Accepted | 1 * (35 / 100) | 2 ms | 1632 KB
Accepted | 1 * (60 / 100) | 3 ms | 1656 KB

"""

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    int n,x,sum;
    sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        for(int j=1;j<x;j++)
        {
            if(x%j==0)
                sum=sum+j;
        }
        if(sum==x)
            printf("YES\n");
        else
            printf("NO\n");
        sum=0;
    }
    return 0;
}