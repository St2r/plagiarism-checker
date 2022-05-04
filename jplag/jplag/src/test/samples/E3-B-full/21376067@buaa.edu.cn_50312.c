"""
2022-03-26 20:43:34
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1556 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 15 ms | 1712 KB


"""

#include <stdio.h>
int main()
{
	int n,i,k;
	int x;
	scanf("%d",&n);
	int o;
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		o = 0;
		for(k=1;k<x-1;k++)
		{
			
			if(x % k == 0)
			{
				o += k;
			
			}

		
		}
			if(x == o)
			{
				printf("YES\n");
			}
			else
			{
				printf("NO\n");
			}
	}
	return 0;	

}