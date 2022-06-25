"""
2022-03-26 19:28:56
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1712 KB
Accepted | 1 * (1 / 10) | 2 ms | 1664 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1608 KB
Accepted | 1 * (4 / 10) | 2 ms | 1644 KB

"""

#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	double sum1=1,sum2;
	int i,j;
	if(n>=20)
	{
		printf("2.71828182845905");
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			sum2=1.0;
			for(j=1;j<=i;j++)
			{
				sum2 *= j;
			}
			sum1 += (1.0)/sum2;
		}
		printf("%.14f",sum1);
	}
	
	
	
	return 0;
}