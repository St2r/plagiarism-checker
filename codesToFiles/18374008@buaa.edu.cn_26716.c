"""
2022-03-26 12:38:52
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1652 KB
Accepted | 1 * (1 / 10) | 9 ms | 1664 KB
Accepted | 1 * (2 / 10) | 9 ms | 1708 KB
Accepted | 1 * (2 / 10) | 8 ms | 1660 KB
Accepted | 1 * (4 / 10) | 9 ms | 1648 KB

"""

#include<stdio.h>
#include<stdlib.h>

int n;
double e = 1.0;
double t = 1.0;

int main() {
    scanf("%d",&n);
    if( n>100000 ) n = 100000;
    for(int i=0; i<n; i++) {
        t *= (double)(i+1);
        e += 1.0 / t;
    }
    printf("%.14lf\n",e);
}