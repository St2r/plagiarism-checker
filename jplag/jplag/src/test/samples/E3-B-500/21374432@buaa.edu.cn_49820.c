"""
2022-03-29 08:41:22
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1548 KB
Accepted | 1 * (35 / 100) | 3 ms | 1596 KB
Accepted | 1 * (60 / 100) | 4 ms | 1704 KB

"""

#include<stdio.h>
int main()
{
    int a,n,c[100],j,s=0;
    a=0;
    for(scanf("%d",&n); n>0; --n)
    {
        scanf("%d",&*(c+a));
        for(j=1; j<c[a]; ++j)
        {
            if(c[a]%j==0)
            {
                s=s+j;
            }
        }

        if(s==c[a])
        {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
        s=0;
        a++;
    }
    return 0;
}