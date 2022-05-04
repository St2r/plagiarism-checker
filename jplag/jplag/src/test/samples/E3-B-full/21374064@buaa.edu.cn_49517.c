"""
2022-03-29 23:46:04
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1680 KB
Accepted | 1 * (35 / 100) | 1 ms | 1580 KB
Accepted | 1 * (60 / 100) | 3 ms | 1584 KB

"""

#include<stdio.h>
 int main() 
{ int n,a[5001]={0},i,j,x,sum=0;
 scanf("%d",&n); 
for(j=1;j<=n;j++) 
{ scanf("%d",&x); sum=0;
 for(i=1;i<x;i++) 
{ if(x%i==0) 
{ sum+=i; }
 } if(sum==x)
 printf("YES\n"); 
else 
printf("NO\n"); 
} 
return 0; 
}