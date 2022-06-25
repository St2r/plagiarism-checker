"""
2022-03-28 23:43:03
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1676 KB
Accepted | 1 * (1 / 10) | 1 ms | 1664 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1640 KB
Accepted | 1 * (4 / 10) | 1 ms | 1716 KB

"""

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, i = 1, j = 1;
    double a = 1;
    double sum = 1;
    scanf("%d", &n);
    if(n <= 20){
        for(i = 1; i<= n; i++){
         a = a / j;
         sum += a;
         j++;
        }
        printf("%.14f\n", sum);
    }
    if(n > 20){
        for(i = 1; i<= 20; i++){
         a = a / j;
         sum += a;
         j++;

        }
        printf("%.14f\n", sum);
    }
    return 0;
}