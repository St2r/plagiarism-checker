"""
2022-03-26 19:35:18
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 2 ms | 1660 KB
Accepted | 1 * (60 / 100) | 4 ms | 1640 KB

"""

#include<stdio.h>
int a[101];
int main()
{
    int n,i,b,c,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=0;
        scanf("%d",&k);
        for(j=1;j<k;j++)
        {
            b=k%j;
            if(b==0)
                c=c+j;

        }
          if(c==k)
                printf("YES\n");
            else printf("NO\n");

    }
    return 0;
}