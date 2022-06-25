"""
2022-03-29 23:26:25
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (1 / 10) | 0 ms | 1648 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (4 / 10) | 1 ms | 1676 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
	double e=1;
	double n,i,r,x=1;
	scanf("%lf",&n);
	if(n<=20)
	{
		for(r=i=1;i<=n;i++)
		{
			r*=i;
			e+=1/r;
		}
           
			
		
		printf("%.14f",e);
	}
	else
	printf("%.14f",2.71828182845905);
	return 0;
}