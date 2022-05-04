"""
2022-03-26 13:08:05
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1668 KB
Accepted | 1 * (35 / 100) | 3 ms | 1564 KB
Accepted | 1 * (60 / 100) | 4 ms | 1612 KB
B

"""

#include <stdio.h>

int main()
{
	int i,n;
	int m=0,sum=0;
	int k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m);
		for(k=1;k<m;k++)
		{
			if(m%k==0)
			{
				sum=sum+k;
			}
		}
		if(sum==m)
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