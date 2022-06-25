"""
2022-03-26 11:26:25
AC
1.0
Accepted | 1 * (1 / 10) | 15 ms | 1684 KB
Accepted | 1 * (1 / 10) | 14 ms | 1596 KB
Accepted | 1 * (2 / 10) | 14 ms | 1676 KB
Accepted | 1 * (2 / 10) | 15 ms | 1656 KB
Accepted | 1 * (4 / 10) | 2 ms | 1612 KB

"""

#include<stdio.h>

int main()
{
    int n;
    double an=1,now=1;
    scanf("%d",&n);
    for(int i=1;i<=n&&i<20;i++){
        now/=i;
        an+=now;
    }
    printf("%.14f",an);
    return 0;
}