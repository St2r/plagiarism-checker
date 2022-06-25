"""
2022-03-26 15:57:22
AC
1.0
Accepted | 1 * (1 / 10) | 8 ms | 1632 KB
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (4 / 10) | 2 ms | 1664 KB

"""

#include<stdio.h>
int main()
{
	double res,i=1,j,a=1,n,tmp;
	scanf("%lf",&n);
	do
	{
		a*=i;
		tmp=1/a;
		res+=tmp;
		i++;
	}while(a<=1e15&&i<=n);
	printf("%.14f",res+1);
	return 0;
}