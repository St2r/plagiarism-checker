"""
2022-03-29 22:07:46
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1716 KB
Accepted | 1 * (1 / 10) | 1 ms | 1712 KB
Accepted | 1 * (2 / 10) | 1 ms | 1632 KB
Accepted | 1 * (2 / 10) | 0 ms | 1684 KB
Accepted | 1 * (4 / 10) | 1 ms | 1632 KB

"""

#include <stdio.h>
#include <stdlib.h>
 int main()
 { 
int n;
 scanf("%d",&n);
 double e=1.0;
 int i=1;
 double x=1.0;
 while((i<=n)&&(i<20))
{ x=x/i; 
e=e+x;
 i++; 
} 
printf("%.14lf",e); 
return 0; 
}