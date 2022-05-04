"""
2022-03-26 13:02:32
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1648 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 4 ms | 1684 KB

"""

#include <stdio.h>
int b[100000];
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int x,sum=0;
		scanf("%d",&x);
		for(int i=1;i<x;i++)
		{
			if(x%i==0)
			{
				sum+=i;
			}
		
		}
		if(sum==x)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}