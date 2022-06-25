"""
2022-03-27 16:13:51
AC
1.0
Accepted | 1 * (1 / 10) | 8 ms | 1628 KB
Accepted | 1 * (1 / 10) | 2 ms | 1620 KB
Accepted | 1 * (2 / 10) | 2 ms | 1692 KB
Accepted | 1 * (2 / 10) | 2 ms | 1632 KB
Accepted | 1 * (4 / 10) | 2 ms | 1572 KB

"""

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n,i;
	double a,sum=1;
	scanf("%d",&n);
	if(n <= 16)
	{
		while(n--)
		{
			a = 1;
			for(i = 1;i <= n+1;i++)
				a /= i;
			sum += a;
		}
		printf("%.14f",sum);
	}
	else
		printf("2.71828182845905");
		return 0;
}