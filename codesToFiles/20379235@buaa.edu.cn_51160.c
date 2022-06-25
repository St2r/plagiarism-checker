"""
2022-03-26 09:06:58
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1652 KB
Accepted | 1 * (1 / 4) | 2 ms | 1648 KB
Accepted | 1 * (1 / 4) | 2 ms | 1644 KB
Accepted | 1 * (1 / 4) | 10 ms | 1712 KB
KB
Accepted | 1 * (4 / 10) | 3 ms | 1616 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	double e=1,p=1;
	scanf("%d",&n);
	for(i=1;i<=n&&i<=20;i++)
	{
		p*=i;
		e+=(1/p);
	}
	printf("%.14lf",e);
	return 0;
}