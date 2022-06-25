"""
2022-03-28 18:26:42
AC
1.0
Accepted | 1 * (1 / 10) | 7 ms | 1608 KB
Accepted | 1 * (1 / 10) | 8 ms | 1608 KB
Accepted | 1 * (2 / 10) | 8 ms | 1624 KB
Accepted | 1 * (2 / 10) | 9 ms | 1700 KB
Accepted | 1 * (4 / 10) | 9 ms | 1612 KB

"""

#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	if (n > 20)
	{
		n = 20;
	}
	double ans = 1,a=1;
	
	for (int i = 1; i <= n; i++)
	{
		a = i * a;
		ans = 1.0 / a + ans;
	}
	printf("%.14lf\n", ans);
	return 0;
}