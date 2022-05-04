"""
2022-03-27 00:56:29
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1660 KB
Accepted | 1 * (35 / 100) | 2 ms | 1552 KB
Accepted | 1 * (60 / 100) | 4 ms | 1552 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
 int n,i,j,sum;
 int a[1005],b[5000];
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  sum=0;
  scanf("%d",&a[i]);
  for(j=1;j<a[i];j++)
  {
   if(a[i]%j==0)
   {
    sum+=j;
   }
  }
  if(sum==a[i])
  {printf("YES\n");}
  else{printf("NO\n");}
 }
 return 0;
}