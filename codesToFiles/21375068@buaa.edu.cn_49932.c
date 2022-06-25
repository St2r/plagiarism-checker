"""
2022-03-29 08:41:48
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1712 KB
Accepted | 1 * (1 / 10) | 0 ms | 1720 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (4 / 10) | 0 ms | 1688 KB

"""

#include<stdio.h>
int main()
{
	int n;
	double i,e=1; 
	double plus=1;
	
	scanf("%d",&n);
	
	for(i=1;(plus>=1.0e-15)&&(i<=n);i++)
	{
		plus/=i;
		e+=plus;
	}
	
	printf("%.14f",e);
	
	return 0;
}