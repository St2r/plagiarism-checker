"""
2022-03-26 23:02:14
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 2 ms | 1636 KB
Accepted | 1 * (60 / 100) | 6 ms | 1656 KB

"""

#include <stdio.h>
int main()
{
    int n,x[1010],sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    	scanf("%d",&x[i]);
    	for(int j=1;j<x[i];j++)
    	{
    		if(x[i]%j==0)
    		{
    			sum+=j;
			}
		}
		if(sum==x[i])
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		sum=0;
	}
    return 0;
}