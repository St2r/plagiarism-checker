"""
2022-03-26 10:54:10
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1616 KB
Accepted | 1 * (1 / 4) | 2 ms | 1616 KB
Accepted | 1 * (1 / 4) | 2 ms | 1608 KB
Accepted | 1 * (1 / 4) | 13 ms | 1608 KB

"""

#include <stdio.h>

int main()
{
	int n, a[100], i = 0, s = 0, k = 1;
	
	scanf("%d", &n);
	
	for(i = 0; i <= n - 1; i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("%c", '\n');
	
	for(i = 0; i <= n - 1; i++)
	{
		for(k = 1; k < a[i]; k++)
		{
		 	if(a[i] % k == 0)
		 	{
		 		s = s + k;
			}
			
			else
			continue;
		}
		
		if(s == a[i])
		{
			printf("YES\n");
		}
		
		else
		{
			printf("NO\n");
		}
		
		s = 0;
	}
	
	return 0;
}