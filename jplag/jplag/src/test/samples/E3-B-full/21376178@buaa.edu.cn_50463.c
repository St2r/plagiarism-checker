"""
2022-03-29 19:39:36
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1648 KB
Accepted | 1 * (35 / 100) | 2 ms | 1552 KB
Accepted | 1 * (60 / 100) | 4 ms | 1636 KB

"""

#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&a);
        b=a;
        c=0;
        while(b<=a && b>0)
        {
            if(a%b==0)
            {
                c=c+b;
            }
            b=b-1;
        }
        if(c-a==a)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}