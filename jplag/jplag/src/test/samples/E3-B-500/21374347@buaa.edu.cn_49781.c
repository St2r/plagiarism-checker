"""
2022-03-26 10:50:16
AC
1.0
Accepted | 1 * (5 / 100) | 14 ms | 1976 KB
Accepted | 1 * (35 / 100) | 17 ms | 1896 KB
Accepted | 1 * (60 / 100) | 2 ms | 2000 KB

"""

#include <stdio.h>
#include <math.h>

int main()
{
	int n, p, s; 
	int i = 0;
	scanf("%d", &n);
	int x[n];
	while(i<n)
	{
		s = 0;
		scanf("%d", &x[i]);
		for(p = 1; p<=sqrt(x[i]); p = p + 1)
		{
			if(x[i] % p == 0)
			{
				if(p == 1)
				s += p;
				else
				s += p + x[i]/p;
			}
		}
		if(s == x[i])
		printf("YES\n");
		else
		printf("NO\n");
		i = i + 1;
	}
	return 0;
}