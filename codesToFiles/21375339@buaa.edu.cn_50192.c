"""
2022-03-28 23:04:26
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1688 KB
Accepted | 1 * (1 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1648 KB
Accepted | 1 * (2 / 10) | 1 ms | 1740 KB
Accepted | 1 * (4 / 10) | 1 ms | 1664 KB

"""

#include <stdio.h>
int main()
{
	int n,i,j;
	 double b=1,c=1;
	scanf("%d",&n);
if(n>50)
{
	n=50;
}
		for(j=1;j<=n;j++)
	{
	for(i=1;i<=j;i++)
	{
		c=c*i;
	}
	b=b+(1*1.0)/c;
	c=1;
}
printf("%.14f",b);	
	return 0;
}