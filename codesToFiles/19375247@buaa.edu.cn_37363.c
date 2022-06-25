"""
2022-03-29 00:21:45
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1728 KB
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 0 ms | 1740 KB
Accepted | 1 * (2 / 10) | 1 ms | 1632 KB
Accepted | 1 * (4 / 10) | 1 ms | 1712 KB

"""

#include <stdio.h>
int main ()
{
	int n;
	double r,sum=1;
	double i;
	scanf("%d",&n);
	if(n <= 20)
	{
		for(r=i=1;i<=n;i++)
		{
			r*=1/i;
			sum+=r;
		}
	}
	else
	{
		for(r=i=1;i<=20;i++){
		r*=1/i;
		sum+=r;
	}
	}
	printf("%.14f\n",sum);
	return 0;
}