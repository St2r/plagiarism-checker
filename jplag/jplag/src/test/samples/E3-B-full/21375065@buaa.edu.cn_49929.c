"""
2022-03-26 14:42:57
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1596 KB
Accepted | 1 * (35 / 100) | 2 ms | 1488 KB
Accepted | 1 * (60 / 100) | 4 ms | 1572 KB

"""

#include<stdio.h>

int main()
{
	int n ;

	scanf("%d",&n);
	int i=0;
	for(;i<n;i++)
	{
		int x;
		scanf("%d",&x);
		int a=0;
		int j=1;
		for(;j<x;j++)
		{
			if(x%j==0) a+=j;
		}
		if(a==x) puts("YES");
		else puts("NO");
	}
	return 0;
}