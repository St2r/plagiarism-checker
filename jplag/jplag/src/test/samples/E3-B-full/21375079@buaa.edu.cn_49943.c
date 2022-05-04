"""
2022-03-27 13:54:16
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1660 KB
Accepted | 1 * (35 / 100) | 14 ms | 1552 KB
Accepted | 1 * (60 / 100) | 4 ms | 1640 KB

"""

#include<stdio.h>
int main()
{
    int i, j, s, n,x;
    scanf("%d", &n);
    while(~scanf("%d",&x)){
        s=0;
        for( j=1; j<=x/2; j++ )
        {
            if(x%j == 0)
                s += j;
        }
        if(s == x)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}