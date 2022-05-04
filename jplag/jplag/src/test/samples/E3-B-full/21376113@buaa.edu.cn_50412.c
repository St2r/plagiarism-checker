"""
2022-03-26 10:44:37
AC
1.0
Accepted | 1 * (5 / 100) | 10 ms | 1636 KB
Accepted | 1 * (35 / 100) | 3 ms | 1632 KB
Accepted | 1 * (60 / 100) | 12 ms | 1620 KB

"""

#include<stdio.h>

int main()
{
 int n,x[105],sum;
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
     scanf("%d",&x[i]);
 }
 for(int j=0;j<n;j++)
 {
     sum=0;
     for(int k=1;k<x[j];k++)
     {
         if(x[j]%k==0)
         {
             sum=sum+k;
         }
     }
     if(sum==x[j]&&j!=n-1)
     printf("YES\n");
     else if(sum==x[j]&&j==n-1)
     printf("YES");
     else if(sum!=x[j]&&j!=n-1)
     printf("NO\n");
     else if(sum!=x[j]&&j==n-1)
     printf("NO");
 }
 return 0;
}