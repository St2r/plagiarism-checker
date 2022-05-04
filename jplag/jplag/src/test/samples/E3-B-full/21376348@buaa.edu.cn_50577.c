"""
2022-03-28 23:05:18
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1652 KB
Accepted | 1 * (35 / 100) | 1 ms | 1628 KB
Accepted | 1 * (60 / 100) | 3 ms | 1728 KB

"""

#include<stdio.h>
int main()
{
 int n;
 int b;
 int sum;
 int a[100]={0};
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
  scanf("%d",&b);
  a[i]=b;
 }
 for(int j=0;j<n;j++)
  {
   sum=0;
   for(int k=1;k<a[j];k++)
   {
    if(a[j]%k==0)
    sum=sum+k;
   }
   if(sum==a[j])
   {
    printf("YES\n");    
   }
   if(sum!=a[j])
   {
    printf("NO\n");    
   }
  }
 return 0;
}