"""
2022-03-29 13:35:18
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1660 KB
Accepted | 1 * (1 / 10) | 1 ms | 1632 KB
Accepted | 1 * (2 / 10) | 0 ms | 1740 KB
Accepted | 1 * (2 / 10) | 1 ms | 1640 KB
Accepted | 1 * (4 / 10) | 1 ms | 1716 KB

"""

#include <stdio.h>

int main()
{
	double e=1,x=1;
	
	int n,i=1;
	
	scanf("%d",&n);
	
	if(n>=18)
	{
		n=18;
	}
	
	while(i<=n)
	{
		x=x*i;
		
		e=e+1.0/x;
		
		i++;
	}
	
	printf("%.14lf",e);
	
	return 0;
}