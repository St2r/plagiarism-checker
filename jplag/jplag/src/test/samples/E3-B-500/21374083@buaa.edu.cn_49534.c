"""
2022-03-26 08:34:59
AC
1.0
Accepted | 1 * (1 / 10) | 4 ms | 1660 KB
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1620 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (4 / 10) | 3 ms | 1620 KB

"""

#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	int i,j,x;
	for(i=1;i<=n;i++)
	{
		int sum=1;
		scanf("%d",&x);
		for(j=2;j<=x/2;j++)
		{
			if(x%j==0)
			{
				sum+=j;
			}
		}
		
		if(sum==x)
		{
			printf("YES");
		}else
		{
			printf("NO");
		}
		if(i!=n)
		{
			printf("\n");
		}
	}
	return 0;
}