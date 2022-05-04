"""
2022-03-26 16:49:52
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 9 ms | 1664 KB
Accepted | 1 * (60 / 100) | 13 ms | 1712 KB

"""

#include <stdio.h>

int main()
{
	int n, i, x, j, s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		s=0;
		for(j=1;j<x;j++)
		{
			if(x%j==0)
			s=s+j;
		}
		if(s==x)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}