"""
2022-03-29 12:55:18
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1668 KB
Accepted | 1 * (35 / 100) | 1 ms | 1668 KB
Accepted | 1 * (60 / 100) | 3 ms | 1732 KB

"""

#include <stdio.h>
int main() {
	int n;
	int x[1024],sum=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x[i]);
	}
	
	for (int i = 0; i < n; i++)
	{
			sum = 0;
			for (int j = 1; j < x[i]; j++)
			{
					
				if (0 == x[i] % j)
					sum += j;
			}
			if (x[i] == sum)
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