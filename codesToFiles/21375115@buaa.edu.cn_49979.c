"""
2022-03-26 14:58:35
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (1 / 10) | 2 ms | 1700 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1604 KB
Accepted | 1 * (4 / 10) | 3 ms | 1712 KB

"""

#include<stdio.h>
int main()
{
	double n,e=1,k=1;
	int i;
	scanf("%lf",&n);
	for(i=1;i<=n;i++)
	{
		
		e+=(1/k);
		k*=i+1;
		if(i>110) break;
		
	}
	printf("%.14f",e);
	
	return 0;
}