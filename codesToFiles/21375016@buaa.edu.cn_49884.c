"""
2022-03-29 20:27:51
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1748 KB
Accepted | 1 * (1 / 10) | 0 ms | 1664 KB
Accepted | 1 * (2 / 10) | 1 ms | 1648 KB
Accepted | 1 * (2 / 10) | 1 ms | 1676 KB
Accepted | 1 * (4 / 10) | 1 ms | 1580 KB

"""

#include<stdio.h>
int main()
{int n;
scanf("%d",&n);
if(n<=100)
{
double e=1,a[100]={1};
for(int i=1;i<=n;i++)
a[i]=a[i-1]*(double)1/i;
for(int i=1;i<=n;i++)
e+=a[i];
printf("%2.14f",e);}
else{printf("2.71828182845905")
;}
return 0;
}