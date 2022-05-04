"""
2022-03-26 09:49:29
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1648 KB
Accepted | 1 * (35 / 100) | 2 ms | 1708 KB
Accepted | 1 * (60 / 100) | 17 ms | 1604 KB


"""

#include <stdio.h>
int check(int a)
{
    int res=0;
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
            res+=i;
    }
    return res==a;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int b=0;
        scanf("%d",&b);
        if(check(b))
            printf("YES\n");
        else
            printf("NO\n");
    }
}