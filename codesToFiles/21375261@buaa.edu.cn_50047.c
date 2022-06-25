"""
2022-03-26 12:08:30
AC
1.0
Accepted | 1 * (1 / 4) | 5 ms | 1636 KB
Accepted | 1 * (1 / 4) | 9 ms | 1648 KB
Accepted | 1 * (1 / 4) | 6 ms | 1664 KB
Accepted | 1 * (1 / 4) | 7 ms | 1628 KB
KB

"""

#include<stdio.h>

int main()
{
	int n,i;
	double e=1,l,t=1.0;
	scanf("%d",&n);
	
	if(n>=17)
	printf("2.71828182845905");
	
	else
	{
		for(i=1;i<=n;i++)
		{
			t=t*i;
			l=1/(double)t;
			e=e+l;
		}
		printf("%.14lf",e);
	}

	return 0;
}