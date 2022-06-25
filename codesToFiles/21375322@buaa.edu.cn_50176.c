"""
2022-03-29 23:33:54
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (2 / 10) | 0 ms | 1756 KB
Accepted | 1 * (2 / 10) | 0 ms | 1728 KB
Accepted | 1 * (4 / 10) | 1 ms | 1644 KB

"""

#include <stdio.h>
int main()
{
 long long int n;
 int i;
 int j;
 double a; 
 scanf("%lld",&n);
 
 if(n>=1&&n<= 1000000000)
{
 double sum =1;
 if(n<=16)
{
 for(i=1;i<=n;i++)
{
 a =1;
 for(j=i;j>0;j--)
 {
  a=a*j;
   }
 sum=sum+1.0*1/a;
}
 printf("%.14f",sum);
}
 
else if(n>16)
{
  n = 17;
  for(i=1;i<= n;i++)
{ 
 a=1;
 for(j=i;j>0;j--)
 {
  a=a*j;
 }
 sum =sum+1.0*1/a;
}

 printf("%.14f",sum);
}
}
 return 0;
}