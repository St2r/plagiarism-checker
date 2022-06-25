"""
2022-03-26 16:36:52
AC
1.0
Accepted | 1 * (1 / 10) | 12 ms | 1608 KB
Accepted | 1 * (1 / 10) | 9 ms | 1700 KB
Accepted | 1 * (2 / 10) | 9 ms | 1652 KB
Accepted | 1 * (2 / 10) | 12 ms | 1556 KB
Accepted | 1 * (4 / 10) | 12 ms | 1488 KB

"""

#include <stdio.h>
int main() {
	int i, j, n;
	double a=1, b=1;
	scanf("%d", &n);
if(n<=17)
{
		for(i=1;i<=n;i++)
{
	for(j=i;j>=1;j--)
	{
		b=b/j;
	}
	a=a+b;b=1;
}
printf("%.14lf", a);}
else
printf("2.71828182845905");
	return 0;
}