"""
2022-03-26 11:33:21
AC
1.0
Accepted | 1 * (1 / 10) | 14 ms | 1656 KB
Accepted | 1 * (1 / 10) | 14 ms | 1680 KB
Accepted | 1 * (2 / 10) | 17 ms | 1596 KB
Accepted | 1 * (2 / 10) | 12 ms | 1652 KB
Accepted | 1 * (4 / 10) | 19 ms | 1652 KB

"""

#include<math.h>
#include<time.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
double b=1,ans=1;
long long n;
signed main()
{
    scanf("%lld",&n);
    int a=clock();
    for(int q=1;q<=n&&(clock()-a<900);q++)
        b*=q,ans+=1.0/b;
    printf("%.14lf\n",ans);
}