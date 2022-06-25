"""
2022-03-28 01:27:21
AC
1.0
Accepted | 1 * (1 / 10) | 12 ms | 1600 KB
Accepted | 1 * (1 / 10) | 16 ms | 1604 KB
Accepted | 1 * (2 / 10) | 23 ms | 1712 KB
Accepted | 1 * (2 / 10) | 11 ms | 1656 KB
Accepted | 1 * (4 / 10) | 12 ms | 1716 KB

"""

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    double ans = 1,temp = 1;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++) {
        temp /= i;
        ans += temp;
        if(temp < 1e-14) break;
    }
    printf("%.14f\n",ans);
    return 0;
}