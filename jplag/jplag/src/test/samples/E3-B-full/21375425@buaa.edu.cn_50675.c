"""
2022-03-27 22:58:25
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1548 KB
Accepted | 1 * (35 / 100) | 2 ms | 1544 KB
Accepted | 1 * (60 / 100) | 2 ms | 1548 KB

"""

#include<stdio.h>
int main(void)
{
	int n, i, x[200], t, s[200];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &x[i]);
	
	for (i = 0; i < n; i++)
	{
		s[i] = 1;
		for (t = 2; (t*t) <= x[i]; t++)
		{
			if ((x[i] % t) == 0)
			{
				s[i] += t;
				s[i] += (x[i] / t);
			}
		}
	}
	
	for (i = 0; i < n; i++)
	{
		if (s[i] == x[i])
			printf("YES\n");
		else
			printf("NO\n");
	}
	
	return 0;
}