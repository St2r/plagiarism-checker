"""
2022-03-27 22:25:30
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1624 KB
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (2 / 10) | 2 ms | 1672 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (4 / 10) | 2 ms | 1616 KB

"""

#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n;
    double e = 1;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        double p = 1;
        for(int j = 1; j <= i; j++) p /= j;
        e += p;
        if(i == 18) break;
    }
    printf("%.14lf",e);
    return 0;
}