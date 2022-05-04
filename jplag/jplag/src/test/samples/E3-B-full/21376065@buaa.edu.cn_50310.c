"""
2022-03-26 20:55:52
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1640 KB
Accepted | 1 * (1 / 10) | 2 ms | 1668 KB
Accepted | 1 * (2 / 10) | 2 ms | 1692 KB
Accepted | 1 * (2 / 10) | 2 ms | 1612 KB
Accepted | 1 * (4 / 10) | 2 ms | 1704 KB

"""

#include <stdio.h>

int main()
{
    int n;
    int xi;
    int sum=0;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&xi);
        for(int j = 1; j < xi; j++ )
        {
            if(xi % j == 0)
            {
                sum += j;
            }
        }
        if(sum == xi)
        {
            printf("YES\n");
        }
        
        else
        {
            printf("NO\n");
        }
        sum = 0;
    }
    
    return 0;
}