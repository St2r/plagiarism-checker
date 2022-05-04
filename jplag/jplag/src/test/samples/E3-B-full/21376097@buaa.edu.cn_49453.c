"""
2022-03-27 22:26:47
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1680 KB
Accepted | 1 * (35 / 100) | 2 ms | 1600 KB
Accepted | 1 * (60 / 100) | 3 ms | 1548 KB

"""

#include <stdio.h>
int a[102];
int main()
{
 int n,i,j,k,sum;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 {
  sum=0;
  for(j=1;j<a[i];j++)
  {
   if ((a[i]%j)==0)
   {
    sum=sum+j;
    //printf("%d",j);
   }
  }
  if(sum==a[i])
  printf("YES\n");
  else
  printf("NO\n");
 }
 return 0;
}