"""
2022-03-26 20:30:12
AC
1.0
Accepted | 1 * (3 / 5) | 6 ms | 1664 KB
Accepted | 1 * (1 / 5) | 2 ms | 1656 KB
Accepted | 1 * (1 / 5) | 2 ms | 1712 KB

"""

#include <stdio.h>

 
int main()
{

	double ans=1,i2=1,n,e=0;
	
	scanf("%lf",&n);
	if(n>19)
	n=19;
	while(i2<=n)
	{
		
	    ans=ans*i2;
	    e=e+(1/ans); 
	    i2++;
	}
	e=e+1;
	printf("%.14lf",e);
	return 0;
}