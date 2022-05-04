"""
2022-03-29 15:34:39
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1728 KB
Accepted | 1 * (35 / 100) | 1 ms | 1680 KB
Accepted | 1 * (60 / 100) | 3 ms | 1676 KB

"""

#include <stdio.h>

int main()
{
 int n,i=1,x,sum=0;
 scanf("%d",&n);
 while(i<=n){
  scanf("%d",&x);
  i++;
 
 for(int j=1;j<x;j++){
   if(x%j==0)
   sum=sum+j; 
 }
  sum==x ? printf("YES\n") : printf("NO\n");
  sum=0;
}
}