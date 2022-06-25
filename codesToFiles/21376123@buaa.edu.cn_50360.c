"""
2022-03-26 09:34:46
AC
1.0
Accepted | 1 * (3 / 5) | 2 ms | 1644 KB
Accepted | 1 * (1 / 5) | 9 ms | 1612 KB
Accepted | 1 * (1 / 5) | 7 ms | 1608 KB

"""

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    scanf("%d",&n);
    if(n <= 20) m = n;
    else m = 20;
    double e = 1;

    for(int i = 1; i <= m; i++){
        int jie = 1;
        for(int k = 1; k <= i; k++){
            jie *= k;
        }
        double dao;
        dao =1.0* 1 / jie;
        e += dao;
    }
    printf("%.14lf",e);

    return 0;
}