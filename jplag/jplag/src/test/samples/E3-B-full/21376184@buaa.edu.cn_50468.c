"""
2022-03-28 23:11:15
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1732 KB
Accepted | 1 * (35 / 100) | 1 ms | 1628 KB
Accepted | 1 * (60 / 100) | 3 ms | 1684 KB

"""

#include<stdio.h>
int main()
{
 int n,a,sum,i;
 scanf("%d",&n);
 while((scanf("%d",&a))!=EOF)
 {
  sum=0;
  for(i=1;i<a;i++)
  {
   if((a%i)==0)
   {
    sum=sum+i;
   }
  }
  if(sum==a)
  printf("YES\n");
  else
  printf("NO\n");
 }
 return 0;
}