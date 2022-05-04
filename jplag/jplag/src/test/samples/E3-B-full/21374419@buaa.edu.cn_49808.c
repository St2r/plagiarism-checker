"""
2022-03-26 15:45:02
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (1 / 10) | 3 ms | 1616 KB
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (1 / 10) | 2 ms | 1488 KB
Accepted | 1 * (1 / 10) | 10 ms | 1704 KB
Accepted | 1 * (1 / 10) | 2 ms | 1608 KB
Accepted | 1 * (1 / 10) | 2 ms | 1620 KB
Accepted | 1 * (1 / 10) | 9 ms | 1584 KB
Accepted | 1 * (1 / 10) | 5 ms | 1492 KB
KB

"""

#include <stdio.h>
int main() {
    int n, sum[105] = { 0 }, x[105];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &x[i]);
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < x[i]; j++) {
            if (x[i] % j == 0)
                sum[i] += j;
        }
    }
    for (int i = 1; i <= n; i++) {

        if (sum[i] == x[i])
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}