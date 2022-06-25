"""
2022-03-26 10:36:52
AC
1.0
Accepted | 1 * (1 / 4) | 9 ms | 1616 KB
Accepted | 1 * (1 / 4) | 2 ms | 1604 KB
Accepted | 1 * (1 / 4) | 2 ms | 1656 KB
Accepted | 1 * (1 / 4) | 3 ms | 1616 KB

"""

#include <stdio.h>
int main()
{
	int n,i,j;
	double b,c=1,sum=0;
	scanf("%d",&n);
	if(n>20)
	n=20;
	for(i=1;i<=n;i++)
	{
		c=1;
		for(j=1;j<=i;j++)
		{
			c=c*j;
		}
		b=1/(c);
		sum=sum+b;
	}
	sum=sum+1;
	printf("%.14f",sum);
	return 0;
}