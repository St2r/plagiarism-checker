"""
2022-03-29 14:04:50
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1656 KB
Accepted | 1 * (35 / 100) | 1 ms | 1692 KB
Accepted | 1 * (60 / 100) | 2 ms | 1728 KB

"""

#include <stdio.h>
 #include <math.h>
 #include <string.h>
 int main()
 {
 int n,x,s=0;
 scanf("%d",&n);
 while(scanf("%d",&x)!=EOF)
 { 
for(int j=1;j<x;j++)
 {
 s=x%j==0?s+j:s;
 } 
s==x?printf("YES\n"):printf("NO\n");
 s=0; 
}
}