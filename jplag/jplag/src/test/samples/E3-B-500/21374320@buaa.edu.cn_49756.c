"""
2022-03-26 16:25:45
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1608 KB
Accepted | 1 * (35 / 100) | 2 ms | 1628 KB
Accepted | 1 * (60 / 100) | 3 ms | 1584 KB

"""

#include <stdio.h>
#include <math.h>
int main() {
 int n; scanf("%d",&n);
 int a[n],i,j,sum=0;
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  for(j=a[i]/2;j>0;j--)
  {
   if((a[i]%j)==0)
   {
    sum+=j;
   } 
  }
  if(sum==a[i])
  {
   printf("YES\n");
  }
  else 
  {
   printf("NO\n");
  }
  sum=0;
 }
 return 0;
}