"""
2022-03-28 22:17:23
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1740 KB
Accepted | 1 * (35 / 100) | 1 ms | 1660 KB
Accepted | 1 * (60 / 100) | 3 ms | 1628 KB

"""

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, sum = 0;
    int j = 1, i = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d",&a);
        for(j = 1; j < a; j++){
            if(a % j == 0)
                sum += j;

        }
        if(sum != a)
        printf("NO\n");
        else
            printf("YES\n");

        sum = 0;  //将sum初始化。否则仍为之前计算的值
    }
    return 0;

}