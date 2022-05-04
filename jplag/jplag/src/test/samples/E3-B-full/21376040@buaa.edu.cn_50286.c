"""
2022-03-26 10:38:43
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1552 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 13 ms | 1544 KB

"""

#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        int a,b=0,j;
        scanf("%d",&a);
        for(j=1; j<a; j++)
        {
            if(a%j==0)
            {
                b+=j;
            }
            else
            {
                b=b;
            }
        }
        if(a==b)
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