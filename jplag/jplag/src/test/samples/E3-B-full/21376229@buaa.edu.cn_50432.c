"""
2022-03-28 20:39:21
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1984 KB
Accepted | 1 * (35 / 100) | 0 ms | 1984 KB
Accepted | 1 * (60 / 100) | 1 ms | 2056 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
	int x,sum=1;
		scanf("%d",&x);
		int i;
		for(i=2;i<=sqrt(x);i++)
		{
			if(x%i==0)
			{
				if(x!=i*i)
				{
					sum+=(i+x/i);
				}
				else
				{
				sum+=i;	
				}	
			}
		}
		if(sum==x)
		printf("YES\n");
		else
		printf("NO\n");
		
	}
		return 0;
	}