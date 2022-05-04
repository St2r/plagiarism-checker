"""
2022-03-26 13:59:34
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1708 KB
Accepted | 1 * (35 / 100) | 2 ms | 1644 KB
Accepted | 1 * (60 / 100) | 4 ms | 1644 KB

"""

#include <stdio.h>
int main()
{
	int n,j,sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&j);
		for(int k=1;k<j;k++)
		{
			if(j%k==0)
			{
				sum+=k;
			}
		}
		if(sum==j)
		printf("YES\n");
		else
		printf("NO\n");
		sum=0;
	}
	return 0;
}