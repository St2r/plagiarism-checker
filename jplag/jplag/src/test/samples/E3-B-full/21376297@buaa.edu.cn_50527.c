"""
2022-03-29 20:57:50
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1568 KB
Accepted | 1 * (35 / 100) | 0 ms | 1684 KB
Accepted | 1 * (60 / 100) | 3 ms | 1692 KB

"""

#include <stdio.h>
#define N 110
int main()
{
    int n,i,j,a[N];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        int ans=0;
        for(j=1;j<a[i];j++)
        {
            if(a[i]%j == 0)
            {
                ans+=j;
            }
        }
        if(ans == a[i])
            printf("YES\n");
        else
            printf("NO\n");

    }
    return 0;
}