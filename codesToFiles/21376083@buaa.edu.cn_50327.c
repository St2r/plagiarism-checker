"""
2022-03-26 08:53:36
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 4 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (4 / 10) | 3 ms | 1528 KB


"""

#include <stdio.h>
int n;
double sum=1,a=1;
int main()
{
	scanf("%d",&n);
	for (int i=1;i<=n;++i)
	{
		a*=1.0/i;
		if(a<0.0000000000000001)break;
		sum+=a;
	}
	printf("%.14lf",sum);
}