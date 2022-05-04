"""
2022-03-26 16:41:44
AC
1.0
Accepted | 1 * (5 / 100) | 13 ms | 1496 KB
Accepted | 1 * (35 / 100) | 10 ms | 1624 KB
Accepted | 1 * (60 / 100) | 13 ms | 1588 KB

"""

#include <stdio.h>

int main()
{
	int n,m,sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&m);
		for(int j=1;j<m;j++)
		{
			
			if(m%j==0)
			sum+=j;
			else
			continue;
		}
		if(sum==m)
		printf("YES\n");
		else
		printf("NO\n");
		sum=0;
	}
	
	
	
	
	
	return 0;
}