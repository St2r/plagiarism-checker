"""
2022-03-28 01:28:37
AC
1.0
Accepted | 1 * (1 / 10) | 3 ms | 1720 KB
Accepted | 1 * (1 / 10) | 8 ms | 1712 KB
Accepted | 1 * (2 / 10) | 3 ms | 1620 KB
Accepted | 1 * (2 / 10) | 6 ms | 1708 KB
Accepted | 1 * (4 / 10) | 7 ms | 1660 KB

KB

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
        if(temp < 1e-14) break; //其实没必要之前把那个20找到，直接判断就行
    }
    printf("%.14f\n",ans);
    return 0;
}