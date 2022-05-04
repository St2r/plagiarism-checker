"""
2022-03-29 15:54:46
WA
0.4
Accepted | 1 * (5 / 100) | 1 ms | 1664 KB
Accepted | 1 * (35 / 100) | 1 ms | 1684 KB
Wrong Answer | 0 * (60 / 100) | 0 ms | 1692 KB

"""

#include<stdio.h>
int main()
{
    int n,i;
    int x;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&x);
        if(x==6||x==24||x==28||x==496)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}