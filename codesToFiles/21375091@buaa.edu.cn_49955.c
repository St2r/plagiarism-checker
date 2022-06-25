"""
2022-03-28 19:49:25
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 0 ms | 1652 KB
Accepted | 1 * (2 / 10) | 1 ms | 1632 KB
Accepted | 1 * (4 / 10) | 1 ms | 1716 KB

"""

#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	double e=1.0;
	double x=1;
	if(n<=17)
	{
			
	
		for(int i=1;i<=n;i++)
		{
			x = x*(1.0*i);
			e += 1.0/x;
			
		}
	}
	else{
		
		n=17;
		for(int i=1;i<=n;i++)
		{
			x = x*(1.0*i);
			e += 1.0/x;
			
		}
	}
	
		printf("%.14f",e);
	return 0;
}