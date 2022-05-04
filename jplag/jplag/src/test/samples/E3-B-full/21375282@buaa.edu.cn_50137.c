"""
2022-03-29 01:06:07
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1676 KB
Accepted | 1 * (35 / 100) | 1 ms | 1736 KB
Accepted | 1 * (60 / 100) | 3 ms | 1676 KB

"""

#include <stdio.h>

int main ()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int t,p,s=0;
        scanf("%d",&t);
        for (p=1;p<t;p++)
        {
        if(t%p==0)
            s=s+p;
        }
        if(s==t)
            printf("YES\n");
        else
            printf("NO\n");
    }
}