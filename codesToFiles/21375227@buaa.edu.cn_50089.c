"""
2022-03-27 11:26:04
AC
1.0
Accepted | 1 * (1 / 100) | 2 ms | 1652 KB
Accepted | 1 * (30 / 100) | 3 ms | 1700 KB
Accepted | 1 * (30 / 100) | 18 ms | 1588 KB
Accepted | 1 * (30 / 100) | 5 ms | 1592 KB
Accepted | 1 * (9 / 100) | 3 ms | 1592 KB

"""

#include<stdio.h>
	int main()
{
	int n,i,j;
	double e=1,E=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
				{
					e=e/j;
				}
			E=E+e;
			e=1;
			if(i==17)
				break;
		}
	printf("%.14lf",E);
return 0;
}