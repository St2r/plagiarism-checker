"""
2022-03-20 13:25:32
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1648 KB
Accepted | 1 * (60 / 100) | 4 ms | 1636 KB

"""

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define ll long long
int main()
{
    int n,x;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        int tmp=0;
        for(int j=1;j<x;j++)
        if(x%j==0) tmp+=j;
        if(tmp==x) printf("YES\n");
        else printf("NO\n");
    }
    // system("pause");
    return 0;
}