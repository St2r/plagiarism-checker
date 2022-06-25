"""
2022-03-26 21:30:18
AC
1.0
Accepted | 1 * (5 / 100) | 6 ms | 1660 KB
Accepted | 1 * (35 / 100) | 10 ms | 1708 KB
Accepted | 1 * (60 / 100) | 4 ms | 1652 KB
) | 1000 ms | 876 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n = 0;
	long long i = 1, E = 1, j = 1;
	double e=1.0;
	scanf("%d", &n);
	
	if(n<=17)
	{
		while (i <= n)
		{
			while (j <= i)
			{
				E = E * j;
				j = j + 1;
			}

			e = e + (1.0 / (E * 1.0));
			E = 1;
			j = 1;
			i = i + 1;
		}
		printf("%.14f", e);
	}
	else
	{
		while (i <= 17)
		{
			while (j <= i)
			{
				E = E * j;
				j = j + 1;
			}

			e = e + (1.0 / (E * 1.0));
			E = 1;
			j = 1;
			i = i + 1;
		}
		printf("%.14f", e);
	}
}