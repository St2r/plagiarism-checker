"""
2022-03-29 22:59:35
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1684 KB
Accepted | 1 * (35 / 100) | 1 ms | 1580 KB
Accepted | 1 * (60 / 100) | 2 ms | 1656 KB

"""

#include<stdio.h>
int main()
{
	int n,x,i=1,fac,factor;
	scanf("%d",&n);
	while(i <= n)
	{
		scanf("%d",&x);
		factor = 0;
		for(fac = 1;fac <= x / 2;fac++)
		{
			if(x % fac == 0)
			{ 
				factor += fac;
			}
		}
		if(factor == x)
			printf("YES\n");
		else
			printf("NO\n");
		i++;
	}
	return 0;
}