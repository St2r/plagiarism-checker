"""
2022-03-29 23:22:43
TLE
0.0
Wrong Answer | 0 * (1 / 10) | 0 ms | 1756 KB
Wrong Answer | 0 * (1 / 10) | 1 ms | 1680 KB
Wrong Answer | 0 * (2 / 10) | 1 ms | 1692 KB
Wrong Answer | 0 * (2 / 10) | 0 ms | 1644 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 0 KB

"""

#include <stdio.h>
int main()
{
	int a,i,j;
	double b=1;
	double c=1;
	
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=i;j>0;j--)
		{
			b=b/j;
		}
		c=c+b;
		b=1;
	}
	printf("%1.8f\n",c);
}