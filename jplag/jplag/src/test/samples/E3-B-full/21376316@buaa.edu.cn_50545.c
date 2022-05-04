"""
2022-03-27 22:23:16
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1944 KB
Accepted | 1 * (35 / 100) | 3 ms | 2048 KB
Accepted | 1 * (60 / 100) | 3 ms | 2092 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,sum,x;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=0;
		scanf("%d",&x);
		for(j=1;j<=(int)(sqrt(x*1.0));j++)
		{
			if(x%j==0)
			{
				sum=sum+j;
				if(((x/j)!=j)&&((x/j)!=x))
				{
					sum=sum+x/j;
				}
			}
		}
//		sum=sum-x;
		if(sum==x)
		{
			printf("YES\n");
		}
		else
		{
//			printf("%d\n",sum);
			printf("NO\n");
		}
	}
}