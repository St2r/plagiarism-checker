"""
2022-03-26 22:55:36
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1632 KB
Accepted | 1 * (1 / 10) | 2 ms | 1716 KB
Accepted | 1 * (2 / 10) | 2 ms | 1664 KB
Accepted | 1 * (2 / 10) | 2 ms | 1660 KB
Accepted | 1 * (4 / 10) | 2 ms | 1636 KB

"""

#include<stdio.h>
int main()
{int n,i,j;
double s=1,a[30];
scanf("%d",&n);
if(n>=20)
n=25;
for(i=1;i<=n;i++)
{a[i]=1;
for(j=1;j<=i;j++)
{a[i]=a[i]/j;
}
s=s+a[i];
}
printf("%.14f",s);
return 0;
}