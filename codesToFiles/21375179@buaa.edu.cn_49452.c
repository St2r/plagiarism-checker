"""
2022-03-27 15:30:58
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1708 KB
Accepted | 1 * (1 / 10) | 2 ms | 1628 KB
Accepted | 1 * (2 / 10) | 2 ms | 1664 KB
Accepted | 1 * (2 / 10) | 2 ms | 1716 KB
Accepted | 1 * (4 / 10) | 2 ms | 1652 KB

"""

#include <stdio.h>
#include <math.h>

int main()
{
	int n,i,j;
	double r,sum=0;
	scanf("%d",&n);
	
	if(n<=20)
	{
		for(i=1;i<=n;i++)
		{
			for(r=j=1;j<=i;j++)
				r*=j;
			sum+=(1/r);
		}
	sum++;
	printf("%.14f",sum);
	}
	else
		printf("2.71828182845905");
	return 0;
}