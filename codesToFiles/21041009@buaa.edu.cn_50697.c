"""
2022-03-29 23:50:35
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (1 / 10) | 1 ms | 1748 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 1 ms | 1636 KB
Accepted | 1 * (4 / 10) | 1 ms | 1652 KB

"""

#include<stdio.h>

int main()
{
	int n,i;
	double a=1,sum=1,b;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=1.0*a*i;
		b=1.0/a;
		sum+=b;
		if(i>25)
		{
			break;
		}
	}
	printf("%.14f",sum);
	return 0;
}