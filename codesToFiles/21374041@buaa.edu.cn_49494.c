"""
2022-03-30 15:39:43
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 0 ms | 1728 KB
Accepted | 1 * (2 / 10) | 1 ms | 1692 KB
Accepted | 1 * (4 / 10) | 1 ms | 1748 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>17) n = 17;
	double x = 1.0,y = 1.0;
	for(int i= 1;i<=n;i++)
	{
		x *= i;
		y += 1/x;
	 } 
	 printf ("%.14lf\n", y);
	 return 0;
}