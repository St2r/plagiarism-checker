"""
2022-03-26 15:01:35
AC
1.0
Accepted | 1 * (5 / 100) | 11 ms | 1612 KB
Accepted | 1 * (35 / 100) | 6 ms | 1644 KB
Accepted | 1 * (60 / 100) | 10 ms | 1556 KB

"""

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


int main()
{
	double e=1;
	double n;
	scanf("%lf",&n);
	if(n<=17)
	{
	for(double i=1;i<=n;i++)
     {
	    double y=1;
	    double x=i;
	while(x!=0)
	{
		y*=1.0*1/x;
		x--;
		
	}
     	e+=y;    	
     	
	 }
}
     else
     e=2.71828182845905;
     
     
     
     printf("%.14lf",e);
     
     
     
	return 0;
 }