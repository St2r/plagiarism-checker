"""
2022-03-26 10:57:45
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1596 KB
Accepted | 1 * (1 / 10) | 17 ms | 1604 KB
Accepted | 1 * (2 / 10) | 2 ms | 1600 KB
Accepted | 1 * (2 / 10) | 13 ms | 1652 KB
Accepted | 1 * (4 / 10) | 2 ms | 1584 KB

"""

#include "time.h"
#include "time.h"
#include "stdlib.h"
#include <stdio.h>
#include "math.h"
int main(){
    long long n = 0, x = 1;
    double a = 1.0;
        scanf("%lld",&n);
    if(n<=50){
        for (int i=1; i<=n; i++) {
            x *= i;
            a = a+1.0/x;
        }
    printf("%.14lf\n", a);
    }
    else {
        printf("2.71828182845905\n");
    }

        
        return 0;
    }