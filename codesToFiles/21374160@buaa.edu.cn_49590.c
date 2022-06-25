"""
2022-03-26 23:22:00
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1708 KB
Accepted | 1 * (1 / 10) | 2 ms | 1692 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (4 / 10) | 2 ms | 1616 KB

"""

#include <stdio.h>

int main()
{
	double n,i=1;
	double e=1,mul=1;
	scanf("%lf",&n);
	if(n<=20){
	for(i=1;i<=n;i++)
	{
		mul=mul*i;
		e=e+1/mul;
	}
	}
	else
	{
		for(i=1;i<=20;i++)
	{
		mul=mul*i;
		e=e+1/mul;
	}
	}
	printf("%.14f",e);
	return 0;
}