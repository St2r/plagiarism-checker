"""
2022-03-29 23:14:25
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1568 KB
Accepted | 1 * (35 / 100) | 1 ms | 1668 KB
Accepted | 1 * (60 / 100) | 2 ms | 1688 KB

"""

#include <stdio.h>
int main()
{
    int n,a[101],i,c,k=0;
    scanf("%d",&n);
    for(c=0;c<n;c++)
    {
        scanf("%d",&a[c]);
        k=0;
        for(i=1;i<a[c];i++)
        {
            if(a[c]%i==0)
            k=k+i;
        }
        if(k==a[c])
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}