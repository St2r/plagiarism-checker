"""
2022-03-26 14:43:38
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1716 KB
Accepted | 1 * (1 / 10) | 3 ms | 1612 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 2 ms | 1648 KB
Accepted | 1 * (4 / 10) | 3 ms | 1656 KB

"""

#include<stdio.h>
int main()
{
	int n,i=1,r;
	scanf("%d",&n);
	double a=1,c=1;
	if(n<=16)
	{
	
	while(i<=n)
	{
		r=1;
		c=1;
		while(r<=i)
		{
			c*=(1.0/r);
			r++;
		}
		a+=c;
		i++;
	}
	printf("%.14f",a);
}
else
{
	printf("2.71828182845905");
}
	return 0;
}