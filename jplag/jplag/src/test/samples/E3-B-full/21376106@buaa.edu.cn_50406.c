"""
2022-03-26 20:49:27
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1684 KB
Accepted | 1 * (35 / 100) | 3 ms | 1704 KB
Accepted | 1 * (60 / 100) | 4 ms | 1652 KB

"""

#include <stdio.h>
int b[105]={0};
int main()
{
    int n,yn;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        int sum=0;
        scanf("%d",&yn);
        for (int j = 1; j < yn; j++)
        {
            if (yn%j==0)
            {
                sum=sum+j;
            }
        }
        if (sum==yn)
        {
            b[i]=1;
        }    
    }
    for (int k = 0; k < n; k++)
    {
        if (b[k]==1)
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