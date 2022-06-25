"""
2022-03-26 16:28:51
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (1 / 10) | 3 ms | 1664 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 3 ms | 1628 KB
Accepted | 1 * (4 / 10) | 574 ms | 1556 KB

"""

#include <stdio.h>
int main()
{
	int n,i,k;
	unsigned long long j;
	double a;
	a=1.0;
	j=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i<=17)
		{
			j*=i;
			a+=1.0/j;		
		}
		
	}
	printf("%.14lf",a);
	return 0;
}