"""
2022-03-28 20:37:39
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1736 KB
Accepted | 1 * (35 / 100) | 1 ms | 1680 KB
Accepted | 1 * (60 / 100) | 3 ms | 1572 KB

"""

#include<stdio.h>
int main()
{
    int n,all,i,x;
    scanf("%d",&n);
    while(scanf("%d",&x)!=-1)
    {
        all=0;
        for(i=1;i<x;i++)
        {
            if(x%i==0)
            {
                all+=i;
            }
        }
        if(all==x)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}