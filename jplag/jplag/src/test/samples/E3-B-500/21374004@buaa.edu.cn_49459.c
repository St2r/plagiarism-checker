"""
2022-03-26 18:18:04
AC
1.0
Accepted | 1 * (5 / 100) | 5 ms | 1680 KB
Accepted | 1 * (35 / 100) | 3 ms | 1680 KB
Accepted | 1 * (60 / 100) | 3 ms | 1620 KB

"""

#include <stdio.h>
int main ()
{
    int n,i,j,s=0,k;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        for(k=1;k<=a[i]/2;k++)
        {
            if(a[i]%k==0)
            s+=k;
        }
            if(s==a[i])
            printf("YES\n");
            else
            printf("NO\n");
            s=0;
    }
return 0;

}