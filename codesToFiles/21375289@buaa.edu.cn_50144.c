"""
2022-03-29 11:55:16
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1636 KB
Accepted | 1 * (1 / 10) | 1 ms | 1664 KB
Accepted | 1 * (2 / 10) | 1 ms | 1728 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (4 / 10) | 1 ms | 1740 KB

"""

#include <stdio.h>

int main()
{
    long long n,i=1,a=1;
    double e=2.00000000000000;
    scanf("%lld",&n);
    while(i<n){
        i++;
        a*=i;
        e+=1.00000000000000/a;
        if(i>=65)
            break;
    }
    printf("%.14f",e);
    return 0;

}