"""
2022-03-29 21:24:57
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1692 KB
Accepted | 1 * (1 / 10) | 1 ms | 1712 KB
Accepted | 1 * (2 / 10) | 1 ms | 1680 KB
Accepted | 1 * (2 / 10) | 1 ms | 1648 KB
Accepted | 1 * (4 / 10) | 0 ms | 1748 KB

"""

#include<stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   double e=1;
   
   for (int i=1; i<=n && i<=20; i++)
   {
   	    double m=1;
   	    for (int j=1; j<=i; j++)
   	    {
   		    m *= j;
	    }
        
        e += (1/m);
   }
   
   printf("%.14f",e);
   
   return 0;
}