"""
2022-03-27 19:48:01
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1480 KB
Accepted | 1 * (35 / 100) | 2 ms | 1704 KB
Accepted | 1 * (60 / 100) | 4 ms | 1696 KB
 Error | 0 * (60 / 100) | 14 ms | 1692 KB

"""

#include <stdio.h>
#define eps 1e-14
int main()
{
	int n,i,r;
	double e=1.0,a;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    a=1.0;
		for(r=1;r<=i;r++)
		{
			a=a/r;
		}
		
		e+=a;
		if(a<eps)
		{break;
		}

	}
	printf("%.14f",e);
	
	
	

	return 0;
}