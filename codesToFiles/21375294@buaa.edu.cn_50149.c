"""
2022-03-26 13:06:35
AC
1.0
nan
"""

#include <stdio.h>
int main()
{
	long long n, i, a = 1;
	double e = 1;
	scanf("%d", &n);
	
	if (n >= 30) printf("2.71828182845905\n");
	else {
	for(i = 1; i <= n; i++)
	{
		a *= i;
		e += 1.0 / a;
	}
	
	printf("%.14f\n", e);
	}
	
	return 0;
}