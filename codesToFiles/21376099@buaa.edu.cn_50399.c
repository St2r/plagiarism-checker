"""
2022-03-29 22:07:18
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1716 KB
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1648 KB
Accepted | 1 * (2 / 10) | 0 ms | 1668 KB
Accepted | 1 * (4 / 10) | 1 ms | 1664 KB

"""

#include <stdio.h>
 int main()
 {
 	int n,i,j;
 	double d;
 	double sum;
 	scanf ("%d",&n);
 	if (n<=18)
 	{for ( i=1;i<=n;i++){
 		double  s=1;
 		for( j=1;j<=i;j++)
 		{
 			s=s*j;
 		}
 		d=1/s;
		sum = sum + d ;
	 }
	 }
 	else 
 	{for ( i=1;i<=17;i++)
	 {
 		double  s=1;
 		for( j=1;j<=i;j++)
 		{
 			s=s*j;
 		}
 		d=1/s;
		sum = sum + d ;
	 }
     }
	 sum = sum + 1 ;
	 printf ("%.14f",sum);
	 return 0;
 
 }