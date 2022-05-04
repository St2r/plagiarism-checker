"""
2022-03-26 14:56:37
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1704 KB
Accepted | 1 * (35 / 100) | 2 ms | 1628 KB
Accepted | 1 * (60 / 100) | 12 ms | 1652 KB
ong Answer | 0 * (2 / 10) | 8 ms | 1656 KB
Wrong Answer | 0 * (4 / 10) | 3 ms | 1612 KB

"""

#include <stdio.h>
int main()
{
	int n,i,k,sum,x[108];
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=0;
		for(k=1;k<x[i];k++)
		{
			if(x[i]%k==0)
			{
				sum=sum+k; 
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
	}
	return 0;
}