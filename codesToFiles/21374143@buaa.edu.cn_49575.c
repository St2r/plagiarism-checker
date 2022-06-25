"""
2022-03-29 15:20:47
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1716 KB
Accepted | 1 * (1 / 10) | 1 ms | 1728 KB
Accepted | 1 * (2 / 10) | 0 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (4 / 10) | 1 ms | 1716 KB

"""

#include <stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	if(n>20) n=20;
	double e=1;
	int i;
	for(i=1;i<=n;i++)
	{
		int j;
		double x=1.0;
		for(j=1;j<=i;j++)
		{
			x=x/j;//记得赋值 
		}
		e+=x;
	 }
	printf("%.14f\n",e);
	return 0;
 }