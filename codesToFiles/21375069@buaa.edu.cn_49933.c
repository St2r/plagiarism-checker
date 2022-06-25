"""
2022-03-28 21:31:15
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1648 KB
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1692 KB
Accepted | 1 * (4 / 10) | 0 ms | 1748 KB

"""

#include<stdio.h>
int main ()
{ long long n, i,j,k=1;
double e=1.0;
scanf("%lld",&n);
for (i=1;i<=n;i++)
{for(j=1;j<=i;j++)
{k=k*j;
}e=e+1.0/k;
k=1;
if(i>=17){break;
}
}
printf("%.14f",e);
return 0;
}