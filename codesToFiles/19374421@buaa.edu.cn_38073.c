"""
2022-03-25 21:45:16
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1704 KB
Accepted | 1 * (1 / 10) | 6 ms | 1712 KB
Accepted | 1 * (2 / 10) | 2 ms | 1608 KB
Accepted | 1 * (2 / 10) | 5 ms | 1624 KB
Accepted | 1 * (4 / 10) | 2 ms | 1660 KB

"""

#include <stdio.h>
#include <math.h>

int main() {
    int n, i, num = 14;
    char s[20] = {0};
    sprintf(s, "%%.%dlf\n", num);
    const double eps = pow(10, - num - 1);
    double e = 1, item = 1, lastE;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        item *= 1.0 / i;
        lastE = e;
        e += item;
        if (e - lastE < eps)
            break;
    }
    printf(s, e);
    return 0;
}