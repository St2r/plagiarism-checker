"""
2022-03-26 09:14:31
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1632 KB
Accepted | 1 * (1 / 4) | 15 ms | 1676 KB
Accepted | 1 * (1 / 4) | 9 ms | 1624 KB
Accepted | 1 * (1 / 4) | 8 ms | 1644 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	long long n,i,j,x=1;
	double e1,e;
	scanf("%lld",&n);
	for(i=1;i<=n&&i<=17;i++)
	{
	    x=x*i;
		e1+=1.0*1/x;
	}
	e=e1+1;
	printf("%.14lf",e);
	return 0;
}