"""
2022-03-26 15:35:36
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1648 KB
Accepted | 1 * (35 / 100) | 2 ms | 1492 KB
Accepted | 1 * (60 / 100) | 4 ms | 1496 KB

"""

#include <stdio.h>

int main()
{
		int n;
		scanf("%d", &n);
		int x[110] = {0};
		for(int i = 0;i < n;i ++)
		{
				int count = 0;
				scanf("%d", &x[i]);
				for(int k = 1;k <= x[i] - 1;k ++)
				{
						if(x[i] % k == 0)
						{
								count += k;	
						}
				}
				if(count == x[i])
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