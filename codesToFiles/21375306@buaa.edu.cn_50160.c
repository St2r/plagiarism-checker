"""
2022-03-28 19:15:01
AC
1.0
Accepted | 1 * (1 / 10) | 7 ms | 1700 KB
Accepted | 1 * (1 / 10) | 2 ms | 1628 KB
Accepted | 1 * (2 / 10) | 2 ms | 1632 KB
Accepted | 1 * (2 / 10) | 2 ms | 1684 KB
Accepted | 1 * (4 / 10) | 2 ms | 1632 KB

"""

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,i=0;
    double e=1.0,a=1.0;
    scanf("%d",&n);
    if(n<20){
    for(i=1;i<n+1;i++){
        a=(a/i)*1.0;
        e=e+a;}
    }
    if(n>=20){
        e=2.71828182845905;
    }printf("%.14f",e);
    return 0;
}