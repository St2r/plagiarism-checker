"""
2022-03-27 22:36:15
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1620 KB
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1676 KB
Accepted | 1 * (2 / 10) | 2 ms | 1708 KB
Accepted | 1 * (4 / 10) | 2 ms | 1680 KB

"""

#include<stdio.h>
int main()
{
	int n,i=1;
	double a=1;
	double s=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=1.0*a/i;
		s=s+a;
		if(i>17)
		{
		break;	
		}
	}
	printf("%.14lf",s);
	return 0;
}