"""
2022-03-26 08:27:48
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1632 KB
Accepted | 1 * (1 / 4) | 2 ms | 1716 KB
Accepted | 1 * (1 / 4) | 2 ms | 1692 KB
Accepted | 1 * (1 / 4) | 2 ms | 1648 KB

"""

#include <stdio.h>
int main()
{
    int n,a,num=0;
    scanf("%d",&n);
    while (n--)
    {num=0;
        scanf("%d",&a);
        for (int i = 1; i <=(a/2)+1 ; ++i) {
            if (a%i==0) num+=i;
        }
        if (num==a) printf("YES\n");
        else printf("NO\n");
    }
}