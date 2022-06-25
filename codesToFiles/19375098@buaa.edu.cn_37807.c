"""
2022-03-29 21:41:40
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1756 KB
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 1 ms | 1744 KB
Accepted | 1 * (2 / 10) | 1 ms | 1740 KB
Accepted | 1 * (4 / 10) | 0 ms | 1640 KB

"""

#include <stdio.h>
int main()
{
 double e;
 int n,i;
 double m;
 scanf("%d",&n);
 for(i=0,m=1,e=0;(i<=n&&i<18);i++,m*=(1.0)*i){
        e+=1.0/m;
 }

 printf("%.14f",e);
 return 0;
 }
