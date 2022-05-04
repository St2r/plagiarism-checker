"""
2022-03-26 18:56:31
WA
0.0
Wrong Answer | 0 * (5 / 100) | 2 ms | 1544 KB
Wrong Answer | 0 * (35 / 100) | 2 ms | 1644 KB
Wrong Answer | 0 * (60 / 100) | 2 ms | 1620 KB

"""

#include <stdio.h>
int main() 
{
	int n, i, a, sum = 0;
	scanf("%d\n", &n);
	scanf("%d\n", &a);
	for(i = 1; i < n; i++)
	{
		if(n%i == 0);
		sum += i;
	}
	if(n == sum)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}	
	return 0;
}