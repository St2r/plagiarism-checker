"""
2022-03-26 13:19:09
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1664 KB
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (2 / 10) | 2 ms | 1624 KB
Accepted | 1 * (2 / 10) | 2 ms | 1660 KB
Accepted | 1 * (4 / 10) | 2 ms | 1660 KB

"""

#include <stdio.h>
int main()
{
	double n, e=1, b;
	scanf("%lf",&n);
	if(n>17)
	n=17;
	for(int i=1;i<=n;i++)
	{
		b=1;
		for(double j=i;j>0;j--)
		b*=j;
		e+=1/b;
	}
	printf("%.14f",e);
	return 0;
}