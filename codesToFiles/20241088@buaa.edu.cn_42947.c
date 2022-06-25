"""
2022-03-26 12:59:16
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (1 / 10) | 3 ms | 1652 KB
Accepted | 1 * (2 / 10) | 3 ms | 1608 KB
Accepted | 1 * (2 / 10) | 3 ms | 1608 KB
Accepted | 1 * (4 / 10) | 3 ms | 1680 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j;
	double t,m;
	scanf("%d",&n);
	m=1;
	for(i=1;i<=n&&i<=17;i++)
	{
		t=1;	
		for(j=i;j>0;j--)
		{
			t=t*j;
		}
		m=m+(1/t);
	}
	printf("%.14f",m);
	return 0;
}