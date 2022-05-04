"""
2022-03-28 20:50:09
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1736 KB
Accepted | 1 * (35 / 100) | 0 ms | 1628 KB
Accepted | 1 * (60 / 100) | 2 ms | 1588 KB

"""

#include <stdio.h>
int main()
{
	int n,x[105];
	int i,j,sum=0;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++)
	{

		for(j=1;j<=x[i]/2;j++)
		{
			if(x[i]%j==0)
			sum+=j;
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