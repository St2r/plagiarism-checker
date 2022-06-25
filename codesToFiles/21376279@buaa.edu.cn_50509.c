"""
2022-03-26 20:38:10
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (1 / 10) | 2 ms | 1664 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (4 / 10) | 2 ms | 1696 KB

"""

#include <stdio.h>
int main()
{
	int n,i,j;
	double e=1,num=1;
	scanf("%d",&n);
	
	for(i=1;i<=n&&i<19;i++)
	{
		for(j=1;j<=i;j++)
		{
			num=num*j;
		}
		e=e+1/num;
		num=1;
	}
	printf("%.14f",e);
	return 0;
}