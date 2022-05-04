"""
2022-03-28 18:18:31
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1648 KB
Accepted | 1 * (35 / 100) | 2 ms | 1680 KB
Accepted | 1 * (60 / 100) | 4 ms | 1684 KB

"""

#include <stdio.h>


int main()
{
    int n,i=0,j,sum=0;
    scanf("%d",&n);
    int a[n];
    while(i<n)
    {
        scanf("%d",&a[i]);
        for(j=2;j<=a[i];j++)
        {
            if(a[i]%j==0)
                sum=sum+a[i]/j;
        }
        if(sum==a[i])
            printf("YES\n");
            else printf("NO\n");
            sum=0;
        i++;
    }
    return 0;
}