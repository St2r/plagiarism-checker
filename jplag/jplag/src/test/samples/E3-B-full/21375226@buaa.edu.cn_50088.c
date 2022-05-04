"""
2022-03-29 22:15:26
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1736 KB
Accepted | 1 * (35 / 100) | 0 ms | 1664 KB
Accepted | 1 * (60 / 100) | 3 ms | 1584 KB

"""

#include<stdio.h>
int main()
{
int a,b,i,j,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a);
int sum=1;
for(j=2;j<a;j++)
{
b=a%j;
if(b==0)
sum+=j;
}
if(sum==a)
printf("YES\n");
else
printf("NO\n");
}
return 0;
}