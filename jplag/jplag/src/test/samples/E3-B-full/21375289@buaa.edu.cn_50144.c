"""
2022-03-29 22:02:33
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1740 KB
Accepted | 1 * (35 / 100) | 1 ms | 1684 KB
Accepted | 1 * (60 / 100) | 2 ms | 1660 KB

"""

#include <stdio.h>

int main()
{
    int n,x[100],i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int a=0;
        scanf("%d",&x[i]);
        for(j=1;j<x[i];j++){
            if(x[i]%j==0)
                a+=j;
        }
        if(a==x[i])
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;

}