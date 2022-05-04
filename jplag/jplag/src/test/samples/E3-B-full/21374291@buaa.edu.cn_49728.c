"""
2022-03-29 23:19:19
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1624 KB
Accepted | 1 * (35 / 100) | 1 ms | 1688 KB
Accepted | 1 * (60 / 100) | 2 ms | 1624 KB

"""

#include<stdio.h>
int main()
{
 int n,a[105]={0},count ;
 scanf("%d",&n);
 for (int i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for (int i=0;i<n;i++)
 {
  count=0;
  for (int j=1;j<=a[i]/2;j++)
  {
   if (a[i]%j==0)
   {
    count +=j;
   }
  }
  if (count==a[i])
  {
   printf("YES\n");
  }else{
   printf("NO\n");
  }
 } 

 return 0;
}