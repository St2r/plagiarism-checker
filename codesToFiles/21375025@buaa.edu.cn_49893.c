"""
2022-03-29 21:36:31
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1712 KB
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1652 KB
Accepted | 1 * (2 / 10) | 1 ms | 1740 KB
Accepted | 1 * (4 / 10) | 0 ms | 1636 KB

"""

#include<stdio.h>
int main()
	{	int n;
		double pi=1.0,k=1.0;
		scanf("%d",&n);
		for(int m=1;m<=n;m++)
		{	
			for(int j=1;j<=m;j++)
			{
				k=k/j;
			}
		pi=pi+k;
		
		k=1.0;
		if(m==18)
		break;
		}
		printf("%.14lf",pi);
		return 0;
 	}