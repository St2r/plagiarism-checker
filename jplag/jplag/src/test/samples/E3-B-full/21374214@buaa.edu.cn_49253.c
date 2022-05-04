"""
2022-03-29 12:53:02
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1576 KB
Accepted | 1 * (35 / 100) | 1 ms | 1684 KB
Accepted | 1 * (60 / 100) | 2 ms | 1584 KB

"""

#include<stdio.h>
int main()
{
 int n,a;
 scanf("%d",&n);
 int i,j;
 for(i=0;i<n;i++)
 {
  scanf("%d",&a);
  int sum=0;
  for(j=1;j<a;j++)
  {
   if(a%j==0) {
   
   sum +=j;}
  }
   if(sum==a) printf("YES\n");
   else printf("NO\n");
   
   
  
  
 }
 return 0;
}