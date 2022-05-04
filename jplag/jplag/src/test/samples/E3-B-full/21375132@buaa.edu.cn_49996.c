"""
2022-03-28 23:12:24
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1668 KB
Accepted | 1 * (35 / 100) | 1 ms | 1656 KB
Accepted | 1 * (60 / 100) | 2 ms | 1744 KB

"""

#include<stdio.h>
int main()
{
    int n,x[10005],i,k,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	scanf("%d",&x[i]);
    }
    	for(i=1;i<=n;i++)
    	{
    		for(k=1;k<x[i];k++)
    		{
    			if(x[i]%k==0)
    			{
    				sum=sum+k;
				}
			
			}
			if(sum==x[i])
			printf("YES\n");
			else
			printf("NO\n");
			sum=0;
		}
    return 0;
}