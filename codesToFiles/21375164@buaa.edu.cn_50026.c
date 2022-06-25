"""
2022-03-30 16:44:00
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1732 KB
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (4 / 10) | 1 ms | 1644 KB

"""

#include <stdio.h>
int main()
{
	int n,i,k;
	double x,j;
	x=1.0;
	scanf("%d",&n);
	j=1.0;
	if(n>17)
	{
		n=17; 
	}
	for(i=1;i<=n;i++)
	{
		j=j/i;
		x=x+j;
		
	}
	
	printf("%.14f\n",x);
	
    return 0;
}