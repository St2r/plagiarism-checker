"""
2022-03-28 00:01:07
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (1 / 10) | 2 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1692 KB
Accepted | 1 * (2 / 10) | 2 ms | 1636 KB
Accepted | 1 * (4 / 10) | 2 ms | 1640 KB

"""

#include <stdio.h>

int main()
{
	int n,i,j;
	double t,k;
	scanf("%d",&n);
	i=2;
	t=2;
	if(n==1)
	{
		printf("2.00000000000000");
	}
	else if(n<20) 
	{
		while (i<=n)
		{
			j=i+1;
			k=1;
			while(j-->1)
			{
				k*=j;
			}
			t+=1/k;
			i++;
		}
		printf("%.14lf",t);
	}
	else if(n>=20)
	{
		printf("2.71828182845905");
	}
	
	
	return 0;
}