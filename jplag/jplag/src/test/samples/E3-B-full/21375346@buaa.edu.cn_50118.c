"""
2022-03-28 00:52:40
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1676 KB
Accepted | 1 * (1 / 4) | 2 ms | 1660 KB
Accepted | 1 * (1 / 4) | 2 ms | 1680 KB
Accepted | 1 * (1 / 4) | 3 ms | 1652 KB

"""

#include <stdio.h>

int main()
{
    int a,b,c,i,n;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a);
        c=0;
        for(b=1;b<=a/2;b++){
            if(a%b==0)
                c=b+c;
        }
        printf(c==a? "YES\n" : "NO\n" );
    }
    return 0;
}