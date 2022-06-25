"""
2022-03-29 00:43:32
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 0 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1636 KB
Accepted | 1 * (4 / 10) | 1 ms | 1680 KB

"""

#include <stdio.h>
int main()
{ 
  int n,i,j;
  j=1; 
  double p,sum=1; 
  scanf("%d", &n); 
    if(n<17) 
      n=n; 
    else n=17; 
     while(j<=n) 
  {
   i=1, p=1;
    while(i<=j)
	 {
	  p=p/(1.0*i);
	   i=i+1;
	 } 
   sum=sum+p;j=j+1;
  }
	 printf("%.14lf",sum); 
	 return 0;
 }