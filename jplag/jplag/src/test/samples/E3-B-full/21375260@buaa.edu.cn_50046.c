"""
2022-03-29 16:47:56
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1624 KB
Accepted | 1 * (35 / 100) | 1 ms | 1652 KB
Accepted | 1 * (60 / 100) | 1 ms | 1680 KB

"""

# include<stdio.h>

int main()
{
    int m=0,n,a;
    scanf("%d",&n);
    for(int t=0;t<n;t++)
    {
        scanf("%d",&a);
        for(int i=1;i<=(a/2);i++)
        {
            if(a%i==0)
            m+=i;
        }
        if(m==a)
            printf("YES\n");
        else
            printf("NO\n");
        m=0;
    }

    return 0;
}