"""
2022-03-26 08:22:51
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1616 KB
Accepted | 1 * (1 / 4) | 3 ms | 1620 KB
Accepted | 1 * (1 / 4) | 3 ms | 1604 KB
Accepted | 1 * (1 / 4) | 3 ms | 1620 KB

"""

#include <stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    while(n--)
    {
        int num=0;
        scanf("%d",&x);
        for(int i=1;i<=x/2;i++)
        {
            if(0==x%i)
            {
                num+=i;
            }
        }
        if(num==x)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}