"""
2022-03-29 11:02:08
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1748 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (4 / 10) | 1 ms | 1736 KB

"""

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>


int main()
{
	int n = 0;
	double	ans = 1,ch=1;
	scanf("%d", &n);
	if(n>=1000)
	{
		printf("2.71828182845905");
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			ch *= j;
		}
		ans += 1 / ch;
		ch = 1;
	}
	printf("%.14lf", ans);
	return 0;
}