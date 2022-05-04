"""
2022-03-27 10:47:37
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1704 KB
Accepted | 1 * (60 / 100) | 3 ms | 1680 KB

"""

#include<stdio.h>

int main()
{
    int n,i,a,j,s;
    
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        s=0;
        for(j=1;j<=a/2;j++)
        {
            if(!(a%j))
            {
                s+=j;
            }
        }
        if(a==s)
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