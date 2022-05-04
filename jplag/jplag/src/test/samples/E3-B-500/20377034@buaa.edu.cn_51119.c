"""
2022-03-26 22:13:36
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1632 KB
Accepted | 1 * (35 / 100) | 2 ms | 1548 KB
Accepted | 1 * (60 / 100) | 4 ms | 1648 KB

"""

#include <stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        int sum=0;
        for(j=1;j<a;j++)
        {
            if(0==a%j)
            {
                sum=sum+j;
            }
        }
        if(sum==a)
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