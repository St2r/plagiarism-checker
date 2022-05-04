"""
2022-03-26 16:02:25
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1676 KB
Accepted | 1 * (35 / 100) | 3 ms | 1548 KB
Accepted | 1 * (60 / 100) | 3 ms | 1544 KB

"""

#include <stdio.h>

int main()
{
    int n,i,j;
    int a[100];
    int sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        for(j=1;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==a[i])
            printf("YES\n");
        else{printf("NO\n");}
        sum=0;
    }
    return 0;

}