"""
2022-03-26 09:28:48
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (1 / 10) | 3 ms | 1604 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 8 ms | 1592 KB
Accepted | 1 * (4 / 10) | 2 ms | 1588 KB

"""

#include <stdio.h>

int main() {
    int n,a;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%d",&n);
        if(n==6||n==28||n==496||n==8128) puts("YES");
        else puts("NO")
    }
    return 0;
}