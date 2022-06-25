"""
2022-03-26 15:23:01
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (1 / 10) | 4 ms | 1640 KB
Accepted | 1 * (2 / 10) | 3 ms | 1620 KB
Accepted | 1 * (2 / 10) | 3 ms | 1688 KB
Accepted | 1 * (4 / 10) | 2 ms | 1640 KB

"""

//
// Created by 123 on 2022/3/26.
//
#include <stdio.h>
int main()
{
    unsigned long long n, sum = 1;
    double result = 1.0;
    scanf("%llu", &n);
    for (int i =1; i <=n ; ++i) {
        sum = sum * i;
        result += (1.0 / sum);
    }
    printf("%.14f", result);
}