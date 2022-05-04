"""
2022-03-26 09:21:12
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1672 KB
Accepted | 1 * (1 / 4) | 4 ms | 1608 KB
Accepted | 1 * (1 / 4) | 2 ms | 1676 KB
Accepted | 1 * (1 / 4) | 3 ms | 1652 KB

"""

#include <stdio.h>
int main()
{
	int n,a,i = 0,b;
	scanf("%d",&n);
	while(scanf("%d",&a) != EOF)
	{
		i = 1;
		b = 0;
		while(i < a)
		{
			if(a % i == 0)
			b += i;
			i++;
		}
		if(b == a)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}