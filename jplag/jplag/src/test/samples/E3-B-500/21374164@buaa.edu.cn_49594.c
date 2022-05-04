"""
2022-03-26 15:46:41
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 2032 KB
Accepted | 1 * (35 / 100) | 3 ms | 2068 KB
Accepted | 1 * (60 / 100) | 3 ms | 2084 KB

"""

#include <stdio.h>
#include <math.h>
int main()
{
	int n,x,i,j,sum;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum=1;
		scanf("%d",&x);
		for(j=2;j<=sqrt(x);j++)
		{
			if(x%j==0)
			{
				sum+=((x/j)+j);
			}
		}
		if(sum==x)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}