"""
2022-03-29 22:39:13
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1736 KB
Accepted | 1 * (35 / 100) | 1 ms | 1676 KB
Accepted | 1 * (60 / 100) | 2 ms | 1736 KB

"""

#include<stdio.h>
int main()
{
 int n,j=1;
 float b;
 int sum=0,x[100];
 scanf("%d",&n);
 for(j=1;j<=n;j++)
 {
    sum=0;
    scanf("%d",&x[j]);
     for(int i=1;i<x[j];i++)
         {
   
           if(x[j]%i==0) 
       sum+=i;
    }
    if(sum==x[j])
     printf("YES\n");
    else
     printf("NO\n");}
 return 0;
}