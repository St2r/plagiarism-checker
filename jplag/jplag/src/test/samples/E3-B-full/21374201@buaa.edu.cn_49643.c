"""
2022-03-26 14:57:07
AC
1.0
Accepted | 1 * (5 / 100) | 9 ms | 1940 KB
Accepted | 1 * (35 / 100) | 9 ms | 2028 KB
Accepted | 1 * (60 / 100) | 9 ms | 1940 KB

"""

//
// Created by 123 on 2022/3/26.
//
#include<stdio.h>
#include <math.h>
int main ()
{
    int n, x, sum;

    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &x);
        sum = 1;
        for (int j = 2; j <= sqrt(x); ++j) {
            if (x % j == 0) {
                sum += (j + ( x / j ));
            }
        }
        printf("%s\n", sum == x ? "YES" : "NO");
    }
    return 0;
}