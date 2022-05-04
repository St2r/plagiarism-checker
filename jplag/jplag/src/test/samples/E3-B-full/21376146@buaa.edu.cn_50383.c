"""
2022-03-26 21:21:31
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1596 KB
Accepted | 1 * (60 / 100) | 4 ms | 1544 KB

"""

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[100]={0},i=0,j,s=0;
    scanf("%d",&n);
    while(i<=n-1)
    {
        j=1;
        s=0;
        scanf("%d",&a[i]);
        while(j<=a[i]-1)
        {
            if(a[i]%j==0)
                s=s+j;
            j++;
        }
        if(s==a[i])
            printf("YES\n");
        else
            printf("NO\n");

        i++;
    }

    return 0;
}