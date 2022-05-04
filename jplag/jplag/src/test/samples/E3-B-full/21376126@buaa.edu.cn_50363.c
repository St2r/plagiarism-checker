"""
2022-03-26 09:02:00
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1700 KB
Accepted | 1 * (35 / 100) | 2 ms | 1756 KB
Accepted | 1 * (60 / 100) | 2 ms | 1700 KB

"""

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

int main()
{
	int judge[10010] = {0}, n, i, a;
	judge[6] = judge[28] = judge[496] = judge[8128] = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i ++)
	{
		scanf("%d", &a);
		if (judge[a])
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}