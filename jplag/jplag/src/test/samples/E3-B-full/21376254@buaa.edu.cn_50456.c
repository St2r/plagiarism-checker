"""
2022-03-27 15:08:15
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1544 KB
Accepted | 1 * (35 / 100) | 3 ms | 1600 KB
Accepted | 1 * (60 / 100) | 3 ms | 1704 KB

"""

#include<stdio.h>

int main()
{
	int n,x;
	int j=2;
	int b=1;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d\n",&x);
		for(j=2;j<x;j++)
		{
			if(x%j==0)
			{
				b=j+b;
			}
			else	
			{
				continue;
			}
		}	
		if(b==x)
		{
			printf("YES\n");
			b=1;
		}
		else
		{
			printf("NO\n");
			b=1;
		}
	}
	

	return 0;
 }