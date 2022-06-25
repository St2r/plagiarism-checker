"""
2022-03-28 22:26:21
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (1 / 10) | 1 ms | 1752 KB
Accepted | 1 * (2 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 0 ms | 1636 KB
Accepted | 1 * (4 / 10) | 1 ms | 1692 KB

"""

#include <stdio.h>
 int main()
 {
 	int n;
	double e=1.0,a,b=1.0;
	scanf("%d",&n);
	 if(n<=18){
	 
	  for(int i=1;i<=n;i++)
	  { 
	    b=i*b;
	    a=1/b;
	    e=e+a;
	    
	   } 
	   printf("%.14lf",e);}
	 if(n>18)
	   printf("2.71828182845905");  
 	return 0;
 }