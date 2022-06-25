"""
2022-03-28 20:33:40
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1688 KB
Accepted | 1 * (1 / 10) | 1 ms | 1640 KB
Accepted | 1 * (2 / 10) | 0 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1676 KB
Accepted | 1 * (4 / 10) | 0 ms | 1688 KB

"""

#include <stdio.h>
int main()
{
	int n,i,c;
	double e=1.0,a;
	scanf("%d",&n);
	if(n<17)
	{
	
	  for(i=1;i<=n;i++)
    	{
		a=1.0;
		for(c=1;c<=i;c++)
		a=a*c;
		e=e+1.0/a;
	   }
    	printf("%.14lf",e);
    }
    else
    {
    	for(i=1;i<=17;i++)
    	{
		a=1.0;
		for(c=1;c<=i;c++)
		a=a*c;
		e=e+1.0/a;
	   }
    	printf("%.14lf",e);
	}
	return 0;
}