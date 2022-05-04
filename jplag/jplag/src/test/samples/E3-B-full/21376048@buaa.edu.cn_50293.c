"""
2022-03-26 09:11:08
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1660 KB
Accepted | 1 * (1 / 4) | 8 ms | 1624 KB
Accepted | 1 * (1 / 4) | 2 ms | 1712 KB
Accepted | 1 * (1 / 4) | 6 ms | 1628 KB

"""

#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i = 0;i < n;i ++)
	{
		int x,cnt = 0;
		scanf("%d",&x);
		for(int j = 1;j < x;j ++)
		{
			if(x % j == 0)
				cnt += j;
		}
		if(cnt == x)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}