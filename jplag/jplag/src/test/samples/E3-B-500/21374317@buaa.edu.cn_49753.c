"""
2022-03-26 09:16:57
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1532 KB
Accepted | 1 * (35 / 100) | 2 ms | 1536 KB
Accepted | 1 * (60 / 100) | 20 ms | 1668 KB

"""

#include <stdio.h>
int main()
{
	int n, x, sum=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &x);
		for(int j=1; j<x; j++)
		{
			if(x%j==0)
			sum+=j;
		}
		if(sum==x)
		printf("YES");
		else
		printf("NO");
		printf("\n");
		sum=0;
	}
	return 0;
}