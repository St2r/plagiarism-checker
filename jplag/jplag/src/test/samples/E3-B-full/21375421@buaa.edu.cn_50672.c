"""
2022-03-26 15:43:03
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1636 KB
Accepted | 1 * (35 / 100) | 2 ms | 1632 KB
Accepted | 1 * (60 / 100) | 4 ms | 1540 KB

"""

#include <stdio.h>

int main()
{
    int n,i=0,st=0,c=1,sum=0;
    scanf("%d",&n);
    int a[n];
    while(i<n)
    {
        scanf("%d",&a[i]);
        i=i+1;
    }
    while(st<n)
    {
        c=1,sum=0;
        if(a[st]==1)
        {
            printf("YES\n");
            st=st+1;
            continue;
        }
        while(c<a[st])
        {
            if((a[st]%c)==0)
            {
                sum=sum+c;
            }
            c=c+1;
        }
        if(sum==a[st])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        st=st+1;
    }
    return 0;
}