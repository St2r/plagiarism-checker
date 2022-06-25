"""
2022-03-26 12:45:25
AC
1.0
Accepted | 1 * (1 / 10) | 11 ms | 1716 KB
Accepted | 1 * (1 / 10) | 10 ms | 1708 KB
Accepted | 1 * (2 / 10) | 9 ms | 1648 KB
Accepted | 1 * (2 / 10) | 9 ms | 1708 KB
Accepted | 1 * (4 / 10) | 8 ms | 1712 KB

"""

#include <stdio.h>

int main()
{
	long long n, t = 1, a[17], i = 1;
	double s = 0;
	
	scanf("%lld", &n);
	
	a[0] = 1;
	
	if(n <= 17)
	{
	 
		for(i = 1; i <= n; i++)
		{
			t = t * i;
			a[i] = t;
		}
		
		for(i = 0; i <= n; i++)
		{
			s = s + 1.0 / a[i];
		}
		
		printf("%.14f", s);
	}
	
	if(n > 17)
	{
		printf("2.71828182845905");
	}
	
	return 0;
}