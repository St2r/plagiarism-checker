"""
2022-03-26 14:12:35
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1636 KB
Accepted | 1 * (1 / 10) | 2 ms | 1620 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1680 KB
Accepted | 1 * (4 / 10) | 2 ms | 1708 KB

"""

#include <stdio.h>
int main()
{
	int n;
	double b=1,i=1;
	double e=1;
	scanf("%d",&n);
	while((i<=n)&&(i<=18))
	{
		b=(double)1/i*b;
		e=e+b;
		i++;
	}
	printf("%.14f",e);
	return 0;      
}