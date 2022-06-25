"""
2022-03-26 20:07:15
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (1 / 10) | 2 ms | 1708 KB
Accepted | 1 * (2 / 10) | 3 ms | 1664 KB
Accepted | 1 * (2 / 10) | 2 ms | 1724 KB
Accepted | 1 * (4 / 10) | 2 ms | 1720 KB

"""

#include<stdio.h>
int main()
{
	double s=1,n,i,t=1;
	scanf("%lf",&n);
	for(i=1;i<=n;i++)
	{
		if(i<=18)
		{
			t=t*i;
			s=s+(1/t);
		}
	}
	printf("%.14f",s);
	return 0;
}