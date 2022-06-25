"""
2022-03-29 18:41:06
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (1 / 10) | 2 ms | 1636 KB
Accepted | 1 * (2 / 10) | 2 ms | 1664 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (4 / 10) | 2 ms | 1636 KB

"""

#include<stdio.h>
//long long n[1000000010];
int main()
{
 int i,n;
 double sum,b;
 sum=1;
 b=1;
 scanf("%d",&n);
 if(n>=20) n=20;
 for(i=1;i<=n;i++)
 {
  b=b*i;
  sum+=1.0/b;
 }
 printf("%.14f",sum);
 return 0;
}