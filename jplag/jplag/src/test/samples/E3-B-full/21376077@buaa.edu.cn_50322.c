"""
2022-03-30 16:00:15
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1732 KB
Accepted | 1 * (35 / 100) | 1 ms | 1676 KB
Accepted | 1 * (60 / 100) | 2 ms | 1732 KB

"""

#include <stdio.h>
int good(int);
int main()
{
   int i, n;
   int x;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       scanf("%d",&x);
       printf( x==good(x) ? "YES\n":"NO\n");
   }
return 0;
}
int good(int x)
{
    int i,ans=0;
    for(i=1;i<x;i++)
    {
        if(x%i==0)
        {
            ans=ans+i;
        }
    }
    return ans;
}
