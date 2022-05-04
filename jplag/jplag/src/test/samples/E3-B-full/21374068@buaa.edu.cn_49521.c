"""
2022-03-29 21:16:00
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1652 KB
Accepted | 1 * (35 / 100) | 1 ms | 1660 KB
Accepted | 1 * (60 / 100) | 2 ms | 1580 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int x[105], n,i,j,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++)	
	{
		sum=0;
		if(x[i]==1)
		{
			printf("NO\n");
		}
		else
		{
			for(j=1;j<x[i];j++)
			{
				if(x[i]%j==0)
				{
					sum+=j;
				}
								
			}
	if(sum==x[i])
			{
				printf("YES\n");
			}
			else
			{
				printf("NO\n");
			}
		}
				

	}
	
}