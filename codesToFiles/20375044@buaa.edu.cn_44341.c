"""
2022-03-29 21:21:52
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1660 KB
Accepted | 1 * (1 / 10) | 0 ms | 1732 KB
Accepted | 1 * (2 / 10) | 1 ms | 1692 KB
Accepted | 1 * (2 / 10) | 1 ms | 1656 KB
Accepted | 1 * (4 / 10) | 3 ms | 1728 KB

"""

#include<stdio.h>
int main()
{
double item=1,sum=1;
int n,i;
scanf("%d",&n);
for(i=1;i<=n&&i<1000000;i++)
{
item*=1.0/i;
sum+=item;
}
printf("%.14f\n",sum);
return 0;
}