"""
2022-03-26 09:17:55
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1604 KB
Accepted | 1 * (1 / 4) | 9 ms | 1588 KB
Accepted | 1 * (1 / 4) | 2 ms | 1612 KB
Accepted | 1 * (1 / 4) | 8 ms | 1608 KB

"""

#include<stdio.h>
int main()
{
	int n,i=1,ans=0,x,j;
	scanf("%d",&n);
	while(i<=n)
	{
		scanf("%d",&x);
		for(j=1;j<x;j++)
		{
			if(x%j==0)
			ans=ans+j;
		}
		if(ans==x)
		printf("YES\n");
		else
		printf("NO\n");
		i++;
		ans=0;
	}
	return 0;
}