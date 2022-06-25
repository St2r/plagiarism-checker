"""
2022-03-26 08:33:51
AC
1.0
Accepted | 1 * (1 / 10) | 3 ms | 1728 KB
Accepted | 1 * (1 / 10) | 8 ms | 1724 KB
Accepted | 1 * (2 / 10) | 7 ms | 1640 KB
Accepted | 1 * (2 / 10) | 9 ms | 1716 KB
Accepted | 1 * (4 / 10) | 15 ms | 1660 KB

"""

#include<stdio.h>
#include<string.h>
int main()
{
	long long n;
	double b=1,a=1;
	scanf("%lld",&n);
	if(n<=18)
	{
	for(int i=1;i<=n;i++)
	{
	a*=i;
	b+=1/a;
	}
	}
	else
	{
		for(int i=1;i<=18;i++)
		{
			a*=i;
			b+=1/a;
	}
	}
	printf("%.14f",b);
	return 0;
}