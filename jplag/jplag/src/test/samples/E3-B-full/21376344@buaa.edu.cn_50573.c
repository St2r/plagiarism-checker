"""
2022-03-28 20:47:01
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1732 KB
Accepted | 1 * (35 / 100) | 1 ms | 1656 KB
Accepted | 1 * (60 / 100) | 3 ms | 1692 KB

"""

#include<stdio.h>

int main()
{
    int n,i,j,sum;
    
    
    scanf("%d",&n);
    int a[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        sum=0;
        for ( j = 1; j < a[i]; j++)
        {
            if (a[i]%j==0)
            {
                sum=sum+j;
            }
            
        }
        if (sum==a[i])
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