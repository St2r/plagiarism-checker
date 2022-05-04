"""
2022-03-26 12:46:01
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1708 KB
Accepted | 1 * (35 / 100) | 2 ms | 1644 KB
Accepted | 1 * (60 / 100) | 2 ms | 1644 KB

"""

#include<stdio.h>
int main()
{
    int a[101],n,i,j,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s==0;
        for(j=1;j<=(a[i]/2);j++)
        {
            if(a[i]%j==0)
                s=s+j;
        }
        if(a[i]==s)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}