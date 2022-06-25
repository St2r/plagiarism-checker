"""
2022-03-29 21:01:17
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1736 KB
Accepted | 1 * (4 / 10) | 1 ms | 1688 KB

"""

#include <stdio.h>

int main()
{
int n;
double e=1;
long long i=1;
scanf("%d",&n);
if(n>20)
n=20;
for(int j=1;j<=n;j++)
{
	i=j*i;
	e=e+(1.0/i);
}
printf("%.14lf\n",e);
    return 0;
	}