"""
2022-03-29 13:57:25
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1652 KB
Accepted | 1 * (35 / 100) | 1 ms | 1732 KB
Accepted | 1 * (60 / 100) | 2 ms | 1584 KB

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
for(int i=1;i<x;i++)
 { 
s=x%i==0?s+i:s;
 } 
if(s==x)
printf("YES\n");
else
printf("NO\n");
 s=0;
 }
}