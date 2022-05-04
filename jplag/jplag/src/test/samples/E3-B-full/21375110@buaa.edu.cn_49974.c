"""
2022-03-27 10:11:29
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1628 KB
Accepted | 1 * (60 / 100) | 8 ms | 1704 KB

"""

#include <stdio.h>
int main()
{
    int n,i,j,a[102],sum=0;
    scanf("%d\n",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d\n",&a[j]);
        sum=0;
    for(i=1;i<a[j];i++)
    {
        if(a[j]%i==0)
            sum=sum+i;
    }
        if(sum==a[j])
        {
       printf("YES\n");
        }
        else
            printf("NO\n");
        
    }
return 0;
}