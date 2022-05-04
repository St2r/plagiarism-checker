"""
2022-03-26 12:22:31
AC
1.0
Accepted | 1 * (5 / 100) | 5 ms | 1640 KB
Accepted | 1 * (35 / 100) | 4 ms | 1548 KB
Accepted | 1 * (60 / 100) | 4 ms | 1648 KB
ccepted | 1 * (2 / 10) | 8 ms | 1600 KB
Wrong Answer | 0 * (4 / 10) | 7 ms | 1660 KB

"""

#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    int s;
    for (int i=0;i<n;i++)
    {
        scanf("%d",&x);
        s=0;
        for (int j=1;j<=(x/2);j++)
        {

            if (x%j==0)
            {
                s+=j;
            }
            else continue;
        }

        if (s==x)
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