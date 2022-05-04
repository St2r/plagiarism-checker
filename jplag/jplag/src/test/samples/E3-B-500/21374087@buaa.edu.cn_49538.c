"""
2022-03-29 23:26:08
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1684 KB
Accepted | 1 * (35 / 100) | 1 ms | 1728 KB
Accepted | 1 * (60 / 100) | 2 ms | 1732 KB

"""

#include <stdio.h>
#define scf(x) scanf("%d",&x)
int main()
{
 int n,i,j,k,a[105];
 scf(n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 { k=0;
  for(j=1;j<a[i];j++)
  {
   if((a[i])%j==0)
   {
    k=k+j;
   }
  }
  if(k!=a[i])
  {
   printf("NO\n");
  }
  else 
  {
   printf("YES\n");
  }
 }
 return 0;
}