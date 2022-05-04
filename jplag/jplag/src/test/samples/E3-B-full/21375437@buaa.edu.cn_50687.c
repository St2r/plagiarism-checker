"""
2022-03-29 23:03:39
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1688 KB
Accepted | 1 * (35 / 100) | 1 ms | 1732 KB
Accepted | 1 * (60 / 100) | 2 ms | 1684 KB

"""

#include <stdio.h>
int main()
{
    int n,x,i=1,b,sum;
    scanf("%d",&n);
    while(i<=n)
    {
        scanf("%d",&x);
        b=1,sum=0;
        while(b<x)
        {
            if(x%b==0)sum=sum+b;
            b++;
        }
        if(sum==x){printf("YES\n");}
        else{printf("NO\n");}
        i++;
    }
    return 0;
}