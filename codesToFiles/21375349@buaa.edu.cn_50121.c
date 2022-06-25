"""
2022-03-28 17:38:33
AC
1.0
Accepted | 1 * (1 / 10) | 3 ms | 1700 KB
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1616 KB
Accepted | 1 * (2 / 10) | 2 ms | 1636 KB
Accepted | 1 * (4 / 10) | 2 ms | 1724 KB

"""

#include<stdio.h>
int main()
{int n,q=1;
double e=1;
scanf("%d",&n);
if(n>=100)
{n=100;
}
while(q<=n)
{int i=1;
double c,t=1;
while(i<=q)
{t=t*i;
i++;
}
e=e+1.0/t;q++;
}
printf("%.14lf",e);
return 0;
 }