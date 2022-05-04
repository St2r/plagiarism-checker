"""
2022-03-26 13:55:22
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1640 KB
Accepted | 1 * (35 / 100) | 2 ms | 1632 KB
Accepted | 1 * (60 / 100) | 3 ms | 1704 KB

"""

#include<stdio.h>
int main() {
	int n, i = 0, a,c = 0;
	scanf("%d", &n);
	while (n > 0)
	{
		scanf("%d", &a);
		while (i <(a / 2))
		{
			i++;
			if ((a % i) == 0)
				c += i;
		}
		n--, i = 0;
		if (c == a)
			printf("YES\n");
		else
			printf("NO\n");
		c = 0;
	}
	
	return 0;
}