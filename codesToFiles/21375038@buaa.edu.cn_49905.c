"""
2022-03-26 13:02:47
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1612 KB
Accepted | 1 * (1 / 10) | 2 ms | 1664 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1652 KB
Accepted | 1 * (4 / 10) | 2 ms | 1716 KB

"""

#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	double e=1.0,mask=1.0;
	if(n<=17)
	{
		for(i=1;i<=n;i++)
		{
			e+=1.0/mask;
			mask*=(i+1);
		}
	}else
	{
		e=2.71828182845905;
	}
	printf("%.14f",e);
	return 0;
}