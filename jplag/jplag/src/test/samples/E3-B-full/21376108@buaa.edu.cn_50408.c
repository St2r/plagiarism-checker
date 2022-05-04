"""
2022-03-29 21:16:37
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1692 KB
Accepted | 1 * (35 / 100) | 1 ms | 1688 KB
Accepted | 1 * (60 / 100) | 3 ms | 1692 KB

"""

#include <stdio.h> 
int main ()
{
  int n,a,i,j;
  scanf ("%d",&n);
  for(j=1;j<=n;j++){
  scanf ("%d",&a);
  int s=0;
  for(i=1;i<=a-1;i++){
   if(a%i==0)
    s=s+i;
   }
  if(s==a)
  printf("YES\n");
  else
  printf("NO\n");
  }
  
  return 0;
 }