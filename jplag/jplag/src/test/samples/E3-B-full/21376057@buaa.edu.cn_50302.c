"""
2022-04-02 09:38:49
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1656 KB
Accepted | 1 * (35 / 100) | 1 ms | 1660 KB
Accepted | 1 * (60 / 100) | 3 ms | 1628 KB

"""

#include <stdio.h>
#include <math.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        int tmp=0;
        for(int j=1;j<x;j++)
            if(x%j==0)tmp+=j;
        if(tmp==x)
            printf("YES\n");
        else
            printf("NO\n");
    }
    
    
    
    return 0;
}
