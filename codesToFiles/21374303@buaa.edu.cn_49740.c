"""
2022-03-29 21:07:12
REP
0.1
Accepted | 1 * (1 / 10) | 0 ms | 1716 KB
Wrong Answer | 0 * (1 / 10) | 0 ms | 1740 KB
Runtime Error (SIGFPE) | 0 * (2 / 10) | 135 ms | 1456 KB
Runtime Error (SIGFPE) | 0 * (2 / 10) | 134 ms | 1488 KB
Runtime Error (SIGFPE) | 0 * (4 / 10) | 131 ms | 1376 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a,b=1;
    double e;
    scanf("%d",&n);
    if(n<=17)
    {
    for(i=1;i<=n;i++)
        {for(a=1;a<=i;a++)
    {
        b*=a;
    }
    e+=1/b;
        }
        e=1+e;
    printf("%.14f",e);

    }
    else
    {
        for(i=1;i<=17;i++)
        {
            for(a=1;a<=i;a++)
            {
                b*=a;
            }
            e+=1/b;
        }
        e=1+e;
        printf("%.14f",e);
    }
    return 0;
}