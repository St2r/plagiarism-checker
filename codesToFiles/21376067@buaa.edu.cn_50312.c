"""
2022-03-28 21:04:02
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1684 KB
Accepted | 1 * (1 / 10) | 1 ms | 1752 KB
Accepted | 1 * (2 / 10) | 0 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1684 KB
Accepted | 1 * (4 / 10) | 1 ms | 1684 KB

"""

#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	double x = 1;
	double sum;
	if(n>18)
	{
		printf("2.71828182845905\n");
	}
	else
	{
		for(int i = 1;i<=n;i++)
	{
		sum = 1;
		
		for(int m = 1;m<=i;m++)
		{
			sum = sum * m;
		}
		x = (1 / sum) + x;
		
	}
		printf("%.14f\n", x);
	}

	
	return 0;
}