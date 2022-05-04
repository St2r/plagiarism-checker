"""
2022-03-26 14:40:48
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1544 KB
Accepted | 1 * (35 / 100) | 2 ms | 1680 KB
Accepted | 1 * (60 / 100) | 4 ms | 1632 KB

"""

#include<stdio.h>

int main()
{
	int n,x;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&x);
		int sum=0;
		int i;
		for(i=1;i<x;i++)
		{
			if(x%i==0) sum+=i;
		}
		if(sum==x) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}