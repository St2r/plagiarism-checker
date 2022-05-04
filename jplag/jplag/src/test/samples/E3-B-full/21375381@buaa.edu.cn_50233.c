"""
2022-03-27 23:57:48
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1604 KB
Accepted | 1 * (35 / 100) | 2 ms | 1660 KB
Accepted | 1 * (60 / 100) | 4 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
    int i, j, s, n, m ; 
    scanf("%d", &n);
    for( i=1; i<=n; i++ )
    {
     scanf("%d",&m);
        s=0; 
        for( j=1; j<m; j++ )
        {
            if(m%j == 0) 
                s += j;
        }
        if(s == m) 
            printf("YES\n");
            else
            printf("NO\n");
    }
    return 0;
}