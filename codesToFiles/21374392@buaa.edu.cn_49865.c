"""
2022-03-27 21:55:48
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1616 KB
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1684 KB
Accepted | 1 * (2 / 10) | 2 ms | 1712 KB
Accepted | 1 * (4 / 10) | 2 ms | 1656 KB

"""

#include <stdio.h>
int main() 
{
double e=1;
double s=1;
int i=1,n;
scanf("%d",&n);
if(n>=100)
n=100;
while(i<=n)
{
e=e+1/s;
i++;
s=s*i;
}
printf("%.14f\n",e);
}