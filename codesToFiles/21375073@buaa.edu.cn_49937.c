"""
2022-03-27 13:33:00
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1604 KB
Accepted | 1 * (1 / 4) | 2 ms | 1664 KB
Accepted | 1 * (1 / 4) | 3 ms | 1708 KB
Accepted | 1 * (1 / 4) | 5 ms | 1604 KB

"""

#include<stdio.h>
int main()
{
 int n,i,k;
 unsigned long long j;
 double sum=0;
 scanf("%d",&n);
 if(n>=17){n=17;}
 for(i=1;i<=n;i++)
 {
  k=1;
  for(j=1;j<=i;j++)
  {
   k*=j;
  }
  sum+=1.0*1/k;
 }
 printf("%.14lf",sum+1);
 return 0;
}