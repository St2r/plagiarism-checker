"""
2022-03-28 22:02:22
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1688 KB
Accepted | 1 * (35 / 100) | 1 ms | 1628 KB
Accepted | 1 * (60 / 100) | 1 ms | 1580 KB

"""

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        int a;
        scanf("%d", &a);
        if(a == 6 || a == 28 || a == 496 || a == 8128) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}