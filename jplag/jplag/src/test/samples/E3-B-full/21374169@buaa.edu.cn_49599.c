"""
2022-03-28 22:07:32
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 2100 KB
Accepted | 1 * (35 / 100) | 1 ms | 2144 KB
Accepted | 1 * (60 / 100) | 1 ms | 2052 KB

"""

#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main()
{
	int n,i,j,sum,x;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=0;
		scanf("%d",&x);
		for(j=1;j<=sqrt(x);j++)
		{
			if(x%j==0&&j!=sqrt(x))
			{
				sum=sum+x/j+j;
			}
			if(j==sqrt(x))
			{
				sum=sum+j;
			}
		}
		if(sum==2*x)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}