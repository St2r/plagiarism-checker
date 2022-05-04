"""
2022-03-28 18:57:13
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1604 KB
Accepted | 1 * (35 / 100) | 2 ms | 1548 KB
Accepted | 1 * (60 / 100) | 13 ms | 1696 KB

"""

#include <stdio.h>
int main()
{
	int n,x,i,sum,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		sum=0;
		for(k=1;k<x;k++)
		{
			if(x%k==0)
			sum=sum+k;
		}
		if(sum==x)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}