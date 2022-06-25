"""
2022-03-26 13:26:04
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1708 KB
Accepted | 1 * (1 / 10) | 9 ms | 1628 KB
Accepted | 1 * (2 / 10) | 8 ms | 1620 KB
Accepted | 1 * (2 / 10) | 9 ms | 1648 KB
Accepted | 1 * (4 / 10) | 3 ms | 1708 KB

"""

#include<stdio.h>
int main()
{
double e=1.0;
int n,i,j;
long long int s,a[19];
scanf("%d",&n);
if (n>18)
{
    n=18;
}
for(i=1;i<=n;i++)
{
    s=1;
  for (j=1;j<=i;j++)
  {
      s=s*j;
  }
  a[i]=s;
}
for(i=1;i<=n;i++)
{
    e=e+(1.0/a[i]);
}
printf("%.14lf",e);
}