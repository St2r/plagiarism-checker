"""
2022-03-26 20:43:21
AC
1.0
Accepted | 1 * (5 / 100) | 6 ms | 1664 KB
Accepted | 1 * (35 / 100) | 3 ms | 1692 KB
Accepted | 1 * (60 / 100) | 12 ms | 1712 KB

"""

#include <stdio.h>

void main()
{
    int n;
    double x;

    scanf("%d", &n);
    
    for(int i=0; i<n; i++)
    {
        int sum=0;
        double div;

        scanf("%lf", &x);

        for(int j=1; j<x; j++)
        {
            div=(double)x/j;

            if(div-(int)div==0)
            {
                sum+=j;
            }
        }

        printf(sum==x?"YES\n":"NO\n");
    }
}