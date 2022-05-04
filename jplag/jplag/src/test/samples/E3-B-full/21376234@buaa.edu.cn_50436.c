"""
2022-03-29 22:36:51
WA
0.0
Wrong Answer | 0 * (5 / 100) | 1 ms | 2148 KB
Wrong Answer | 0 * (35 / 100) | 1 ms | 2100 KB
Wrong Answer | 0 * (60 / 100) | 1 ms | 2132 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n,y,i,sum=1;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&y);
		for(i=2;i<=sqrt(y);i++)
		{
			if(y%i==0)
			{
				if(y!=i*i)
				{
					sum+=(i+y/i);
				}
				else
				{
				sum+=i;	
				}	
			}
		}
		if(sum==y)
		printf("YES\n");
		else
		printf("NO\n");
		
	}
		return 0;
	}