"""
2022-03-29 21:52:53
TLE
0.0
Time Limit Exceed | 0 * (5 / 100) | 1000 ms | 0 KB
Time Limit Exceed | 0 * (35 / 100) | 1000 ms | 0 KB
Time Limit Exceed | 0 * (60 / 100) | 1000 ms | 0 KB

"""

#include<stdio.h>
int main()
{
    int n,x,j;
    int ans=0;
    int i=0;
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%d",&x);
        for(j=1;j<x;j++)
        {
            if(x%j==0)
                ans=ans+j;
        }
        if(ans==x)
            printf("YES\n");
        else
            printf("NO\n");
        ans=0;
    }
    return 0;
}