"""
2022-03-27 22:16:29
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (1 / 10) | 2 ms | 1620 KB
Accepted | 1 * (2 / 10) | 2 ms | 1712 KB
Accepted | 1 * (2 / 10) | 2 ms | 1620 KB
Accepted | 1 * (4 / 10) | 2 ms | 1608 KB

"""

#include<stdio.h>

int main()
{
	double m,c=1.0,b=1.0;
	int n;
	scanf("%d",&n);
	for(int i=1;(i<=20)&&(i<=n);i++)
	{
		b=b*i*1.0;
		c=c+1.0/b;
	}
	
	printf("%.14f",c);
	return 0;
 }