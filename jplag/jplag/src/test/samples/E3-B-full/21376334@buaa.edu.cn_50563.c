"""
2022-03-27 23:18:48
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1600 KB
Accepted | 1 * (35 / 100) | 3 ms | 1652 KB
Accepted | 1 * (60 / 100) | 4 ms | 1636 KB

"""

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int a,sum=0;
        scanf("%d",&a);
        for(int i=1;i<a;i++)
        {
            if(a%i==0)
            {
                sum+=i;
            }
        }
        if(sum==a)
        printf("YES\n");
        else
        printf("NO\n");
    }
}