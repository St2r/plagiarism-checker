"""
2022-03-26 21:51:02
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1632 KB
Accepted | 1 * (35 / 100) | 2 ms | 1660 KB
Accepted | 1 * (60 / 100) | 3 ms | 1648 KB

"""

#include<stdio.h>
int main()
{
    int sum;
    int a;
    int n;
    scanf("%d");
    while(scanf("%d",&n)!=EOF)
    {
        for(a=1,sum=0; a<=(n/2); a++)
        {
            if(0==n%a)
                sum+=a;
        }
        if(n==sum)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}