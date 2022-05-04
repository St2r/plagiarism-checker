"""
2022-03-28 22:19:15
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1680 KB
Accepted | 1 * (35 / 100) | 1 ms | 1676 KB
Accepted | 1 * (60 / 100) | 3 ms | 1684 KB

"""

#include<stdio.h>
int main()
{
	int n, x, i, j, sum=0;
	scanf("%d", &n);
	
	while(n--)
	{
		scanf("%d", &x);
		
		for(i=1; i<x; i++)
		{
			j = x % i;
			
			if(j == 0)
				sum = sum + i;
		}
		
		if(sum == x )
			printf("YES\n");
		else if(sum != x)
			printf("NO\n");
		
		sum = 0;
	}
	
	return 0;
}