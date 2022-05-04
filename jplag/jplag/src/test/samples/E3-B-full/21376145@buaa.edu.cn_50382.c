"""
2022-03-26 16:32:27
AC
1.0
Accepted | 1 * (5 / 100) | 8 ms | 1600 KB
Accepted | 1 * (35 / 100) | 12 ms | 1700 KB
Accepted | 1 * (60 / 100) | 9 ms | 1492 KB

"""

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n,i,j,x,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
    	scanf("%d",&x);
        for(j=1;j<=x/2;j++)
        {
        	if(x%j==0)
        	sum+=j;
        }
        if(sum==x)
        printf("YES\n");
        else
        printf("NO\n");
        
        sum=0;
    }

	return 0;
}