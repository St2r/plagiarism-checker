"""
2022-03-28 22:04:34
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1656 KB
Accepted | 1 * (1 / 10) | 1 ms | 1648 KB
Accepted | 1 * (2 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 0 ms | 1656 KB
Accepted | 1 * (4 / 10) | 0 ms | 1748 KB

"""

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    double e = 1.0;
    long long rem = 1;
    if(n > 34) n = 34;
    for(int i = 1; i <= n; i++){
        rem *= i;
        e += 1.0*1/rem;
    }
    printf("%.14lf", e);
    return 0;
}