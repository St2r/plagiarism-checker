"""
2022-03-29 13:54:07
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1652 KB
Accepted | 1 * (35 / 100) | 1 ms | 1684 KB
Accepted | 1 * (60 / 100) | 3 ms | 1628 KB

"""

#include<stdio.h>
int main ()
{
    int n,a[101],i,j;
    int sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=1,sum=0;j<a[i];j++)
        {
            if((a[i]%j)==0)
            {
                sum=sum+j;
            }
        }
        if(sum==a[i])
        {
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}
