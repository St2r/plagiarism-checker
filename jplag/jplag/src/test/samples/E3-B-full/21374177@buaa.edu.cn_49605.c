"""
2022-03-27 00:20:44
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 2 ms | 1680 KB
Accepted | 1 * (60 / 100) | 4 ms | 1548 KB

"""

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x,i,j,k;

    scanf("%d",&n);
    for(i = 1;i <= n;i++){
        k = 1;
        scanf("%d",&x);
        for(j = 2;j < x;j++){
            if(x % j == 0)
                k += j;
        }
        if(k == x)
            printf("YES\n");
        else
            printf("NO\n");
    }
}