"""
2022-03-26 09:42:43
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1712 KB
Accepted | 1 * (1 / 4) | 6 ms | 1700 KB
Accepted | 1 * (1 / 4) | 11 ms | 1684 KB
Accepted | 1 * (1 / 4) | 3 ms | 1636 KB

"""

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
int main(){
    long long int n;
    scanf("%lld", &n);
    double result=1.0;
    double sum=1.0;
    for (int i=1; i<=n&&i<=30; i++) {
        sum=sum/i;
        result+=sum;
    }
    printf("%.14f", result);
}