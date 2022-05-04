"""
2022-03-26 10:03:44
WA
0.75
Accepted | 1 * (1 / 4) | 2 ms | 1700 KB
Accepted | 1 * (1 / 4) | 2 ms | 1620 KB
Accepted | 1 * (1 / 4) | 9 ms | 1696 KB
Wrong Answer | 0 * (1 / 4) | 16 ms | 1596 KB

"""

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    //printf("n=%d\n",n);

    int x[100];
    int i;
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&x[i]);
    }
    /*for ( i = 0; i < n; i++)
    {
        printf("x[%d]=%d\n",i,x[i]);
    }*/

    int j;
    int sum=0;
    for ( i = 0; i < n; i++)
    {
        sum=0;
        for ( j = 1; j < x[i]; j++)
        {
            //printf("x[%d]=%d",i,x[i]);
            if (x[i]%j==0)
            {
                sum+=j;
            }
            else
            {
                sum=sum;
            }
            //printf("sum=%d\n",sum);
        }
        if (sum==x[i])
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