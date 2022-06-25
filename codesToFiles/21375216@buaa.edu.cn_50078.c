"""
2022-03-26 17:32:31
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (1 / 10) | 2 ms | 1636 KB
Accepted | 1 * (2 / 10) | 2 ms | 1716 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (4 / 10) | 5 ms | 1684 KB

"""

#include <stdio.h>

int main()
{
	long long int n, i, j, p;
	double s, a=0;
	scanf("%lld",&n);
	for(i=1;i<=n;i++)
	{
		p=1;
		for(j=i;j>0;j--)
		{
			p=p*j;
		}
		if(p>=1e15)
		{
			a=a+1.0/p;
			s=1+a;
	 printf("%.14f",s);
	return 0;
		}
		a=a+1.0/p;
	}
	 s=1+a;
	 printf("%.14f",s);
	return 0;
}