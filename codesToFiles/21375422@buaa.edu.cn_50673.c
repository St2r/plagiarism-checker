"""
2022-03-28 01:10:30
AC
1.0
Accepted | 1 * (1 / 10) | 3 ms | 1720 KB
Accepted | 1 * (1 / 10) | 8 ms | 1712 KB
Accepted | 1 * (2 / 10) | 3 ms | 1620 KB
Accepted | 1 * (2 / 10) | 6 ms | 1708 KB
Accepted | 1 * (4 / 10) | 7 ms | 1660 KB

KB

"""

#include<stdio.h>
int main()
{
	long long n = 0, i = 1, j = 1, m = 1;
	double e = 1.0;
	scanf("%lld", &n);
	if(n >= 65)
	{
		n = 65;
	}
	while(i <= n)
	{
		/*while(j <= i)
		{
			m = m * j;
			j++;
		}*/
		m = m * i;
		e = e + (1.0 / m);
		i++;
	}
	printf("%.14lf", e);
	
	
	return 0;
}