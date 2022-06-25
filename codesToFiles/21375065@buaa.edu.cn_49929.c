"""
2022-03-27 00:13:58
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1712 KB
Accepted | 1 * (1 / 10) | 2 ms | 1716 KB
Accepted | 1 * (2 / 10) | 2 ms | 1716 KB
Accepted | 1 * (2 / 10) | 2 ms | 1716 KB
Accepted | 1 * (4 / 10) | 10 ms | 1484 KB

"""

#include<stdio.h>

int main()
{
	int n ;
	double e=1 ;
	//char  ;
	scanf("%d",&n);
	if(n>=17) puts("2.71828182845905");
	else{
		int i=1;
		for(i=1;i<=n;i++)
		{
			double k=1;
			int j=1;
			for(j=1;j<=i;j++)
			{
				k/=1.0*j;
			}
			e+=k;
		}
		printf("%.14lf\n",e);
	}
	return 0;
}