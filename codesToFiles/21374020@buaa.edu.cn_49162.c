"""
2022-03-26 11:53:19
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1976 KB
Accepted | 1 * (35 / 100) | 3 ms | 1892 KB
Accepted | 1 * (60 / 100) | 3 ms | 1996 KB

"""

#include<stdio.h>
int main()
{
	int n;
	double s=1.0,a=1.0,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	a=a*(1.0/(i));
	s=s+a;
	}
	printf("%.14lf",s);
	return 0;
	
}