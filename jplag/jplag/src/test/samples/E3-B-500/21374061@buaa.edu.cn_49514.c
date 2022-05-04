"""
2022-03-27 15:24:51
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1680 KB
Accepted | 1 * (60 / 100) | 4 ms | 1700 KB

"""

#include<stdio.h>
int main()
{
    int n;
    int m;
    int i=0,j;
    int sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        scanf("%d",&m);


    for(j=m-1;j>0;j--)
    {

        if(m%j==0)
            sum=sum+j;
    }
    if(sum==m)
    {
        printf("YES\n");

    }
    else
    {
        printf("NO\n");

    }
    sum=0;

    }
    return 0;
}