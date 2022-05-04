"""
2022-03-26 12:07:05
AC
1.0
Accepted | 1 * (1 / 10) | 11 ms | 1576 KB
Accepted | 1 * (1 / 10) | 2 ms | 1604 KB
Accepted | 1 * (2 / 10) | 2 ms | 1604 KB
Accepted | 1 * (2 / 10) | 2 ms | 1600 KB
Accepted | 1 * (4 / 10) | 2 ms | 1664 KB

"""

#include<stdio.h>
int main()
{    
    int n,i,a[1005],sum,j;
 scanf("%d",&n);
 for(i=0;i<n;i++)
     scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 {
  sum=0;
  for(j=1;j<a[i];j++)
  {
   if(a[i]%j==0)
   {
    sum=sum+j;
   }
  }
  if(sum==a[i])
      printf("YES");
  else
      printf("NO");
  printf("\n");
 }
 return 0;
}