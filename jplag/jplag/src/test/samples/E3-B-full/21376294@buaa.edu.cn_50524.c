"""
2022-03-26 11:19:23
AC
1.0
Accepted | 1 * (5 / 100) | 11 ms | 1532 KB
Accepted | 1 * (35 / 100) | 14 ms | 1616 KB
Accepted | 1 * (60 / 100) | 17 ms | 1532 KB

"""

#include<math.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int a,n;
signed main()
{
    scanf("%d",&n);
    for(int q=1;q<=n;q++)
    {
        scanf("%d",&a);
        int tmp=0;
        for(int w=1;w<a;w++)
            if(!(a%w))
                tmp+=w;
        if(tmp==a)
            printf("YES\n");
        else
            printf("NO\n");
    }
}