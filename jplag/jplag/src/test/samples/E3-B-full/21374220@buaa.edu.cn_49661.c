"""
2022-03-29 22:42:35
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1664 KB
Accepted | 1 * (35 / 100) | 1 ms | 1584 KB
Accepted | 1 * (60 / 100) | 2 ms | 1660 KB

"""

#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
while(n--)
{
    int sum=0;
    int x;
    scanf("%d",&x);
 for(int k=1;k<x;k++)
    if(x%k==0)
    sum+=k;
 if(sum==x)
 printf("YES\n");
 else
 printf("NO\n");
}
return 0;
}