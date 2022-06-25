"""
2022-03-29 23:20:38
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1692 KB
Accepted | 1 * (1 / 10) | 1 ms | 1752 KB
Accepted | 1 * (2 / 10) | 1 ms | 1752 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (4 / 10) | 0 ms | 1632 KB

"""

#include <stdio.h>

int main()
{
    int n=0,i=0;
    double e = 2,f = 1;
    scanf("%d",&n);
    if(n==1)printf("%.14f",e);
    else {
    for(i=1;i<n&&i<=17;i++){
            f = f*(i+1);
            e = e + 1/f;
    }
    printf("%.14f",e);}
    return 0;
}