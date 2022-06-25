"""
2022-03-28 00:33:53
AC
1.0
Accepted | 1 * (1 / 10) | 3 ms | 1636 KB
Accepted | 1 * (1 / 10) | 2 ms | 1692 KB
Accepted | 1 * (2 / 10) | 2 ms | 1668 KB
Accepted | 1 * (2 / 10) | 2 ms | 1720 KB
Accepted | 1 * (4 / 10) | 3 ms | 1668 KB

"""

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    double sum = 1.0,index = 1.0,out = 1.0;

    scanf("%d",&n);
    for(i = 1;i <= n;i++){
                index *= 1.0 * i;
            sum += 1.0 / index;
            if(i == 20)
                break;
    }
    out = sum;
    printf("%.14lf",out);
}