"""
2022-03-26 16:35:13
AC
1.0
Accepted | 1 * (1 / 10) | 3 ms | 1664 KB
Accepted | 1 * (1 / 10) | 2 ms | 1696 KB
Accepted | 1 * (2 / 10) | 2 ms | 1604 KB
Accepted | 1 * (2 / 10) | 2 ms | 1708 KB
Accepted | 1 * (4 / 10) | 2 ms | 1652 KB

"""

#include <stdio.h>
int main() 
{
	int n, j, i;
	double e=0.0, r;
	scanf("%d", &n);
	
	if(n>10000)
	printf("2.71828182845905");
    	
    else
    {
    	for(r=i=1;i<=n;i++)
    	{
    		r=r*i;
    		e=e+1/r;
		}
		printf("%.14f",e+1);
	}
	
	return 0;
}