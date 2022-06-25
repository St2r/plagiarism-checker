"""
2022-03-27 19:04:44
AC
1.0
Accepted | 1 * (1 / 10) | 3 ms | 1592 KB
Accepted | 1 * (1 / 10) | 4 ms | 1548 KB
Accepted | 1 * (2 / 10) | 5 ms | 1696 KB
Accepted | 1 * (2 / 10) | 4 ms | 1632 KB
Accepted | 1 * (4 / 10) | 3 ms | 1704 KB

"""

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    double sum=1,a=1;
    scanf("%d",&n);
    for(float i=1;i<=n;i++){
    a*=i;
    sum+=( 1/a);}

    printf("%.14lf",sum);
    return 0;
}