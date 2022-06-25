"""
2022-03-29 22:19:22
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (1 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 1 ms | 1676 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (4 / 10) | 1 ms | 1684 KB

"""

#include <stdio.h> 
int main() 
{ 
int n,i=1; 
scanf("%d",&n);
 double s=1.0, k=1.0; 
 while((i<=n)&&(i<20))
 { 
  k=k/i;
  s=s+k; 
  i++; 
 }
  printf("%.14lf",s); 
}