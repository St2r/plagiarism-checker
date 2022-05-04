"""
2022-03-29 14:26:59
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1684 KB
Accepted | 1 * (35 / 100) | 1 ms | 1660 KB
Accepted | 1 * (60 / 100) | 2 ms | 1740 KB

"""

#include <stdio.h>

int main()
{
	int n,i,j,x,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum=0;
		scanf("%d",&x);
		for(j=1;j<=x/2;j++)
		{
			if(x%j==0)
			sum=sum+j;
		}
		if(sum==x)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
 }