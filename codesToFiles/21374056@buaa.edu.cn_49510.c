"""
2022-03-26 11:55:45
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (1 / 10) | 5 ms | 1612 KB
Accepted | 1 * (2 / 10) | 3 ms | 1608 KB
Accepted | 1 * (2 / 10) | 6 ms | 1636 KB
Accepted | 1 * (4 / 10) | 3 ms | 1644 KB

"""

#include<stdio.h>
 
 int main()
 {
 	double a, b, c, n;
 	b=1.0;c=1.0;a=1.0;
 	scanf("%lf",&n);
 	if(n>17)
 	{
 		n=17;
	 }
	for(int i=1;i<=n;i++)
	{
		a=a*(1/c);
		b=b+a;
		c++;
	}
	printf("%.14lf\n",b);
 	
 }