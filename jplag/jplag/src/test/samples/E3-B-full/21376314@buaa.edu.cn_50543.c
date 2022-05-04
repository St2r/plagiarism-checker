"""
2022-03-26 09:08:41
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1660 KB
Accepted | 1 * (35 / 100) | 2 ms | 1664 KB
Accepted | 1 * (60 / 100) | 15 ms | 1660 KB

"""

//
//  main.c
//  c
//
//  Created by 董泽涛 on 2022/3/26.
//

#include <stdio.h>

int main()
{
    int n,x;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        scanf("%d",&x);
        if(x==1||x==2||x==3)
        {
            printf("NO\n");
            continue;
        }
        int sum=1;
        for(int j=2;j*j<=x;++j)
        {
            if(j*j==x)
            {
                sum+=j;
                break;
            }
            if(x%j==0) sum+=(j+x/j);
        }
        if(sum==x) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}