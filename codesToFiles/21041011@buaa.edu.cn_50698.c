"""
2022-03-29 21:47:32
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1728 KB
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1664 KB
Accepted | 1 * (2 / 10) | 1 ms | 1632 KB
Accepted | 1 * (4 / 10) | 1 ms | 1732 KB

"""

#include <stdio.h> 

int main()
{
	int n;
	
	int i;
	
	double a;
	
	double e=1;
	
	double w=1;
	
	scanf("%d",&n);
	
	if(n>18)
	{
		printf("2.71828182845905");
	}
	else
	{
		for(i=1;i<=n;i++)
		{
		w=w*i;
		
		a=1/w;
		
		e=e+a;
		
		}
		
	printf("%.14f",e);
	
	}
	
	return 0;
}