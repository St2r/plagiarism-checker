"""
2022-03-28 23:23:21
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1736 KB
Accepted | 1 * (35 / 100) | 1 ms | 1624 KB
Accepted | 1 * (60 / 100) | 2 ms | 1688 KB

"""

#include <stdio.h>
int main()
{
	int n,m,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		int sum=0;
		for(j=1;j<m;j++)
		{
			if(m%j==0)
			{
				sum=sum+j;
			}
		}
		if(sum==m)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
 }