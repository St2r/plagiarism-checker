"""
2022-03-26 22:44:08
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1660 KB
Accepted | 1 * (35 / 100) | 2 ms | 1708 KB
Accepted | 1 * (60 / 100) | 25 ms | 1712 KB

"""

#include <stdio.h>

int main()
{
	int n,x,i,k,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);	
		for(k=1;k<x;k++)
		{
			if(x%k==0)
			sum+=k;
		}
		if(sum==x)
		printf("YES\n");
		else
		printf("NO\n");
		sum=0;
	}	
	return 0;
}