"""
2022-03-27 00:15:37
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 2052 KB
Accepted | 1 * (35 / 100) | 2 ms | 1932 KB
Accepted | 1 * (60 / 100) | 2 ms | 2128 KB

"""

#include <stdio.h>
#include <math.h>
int main()
{
    int a[101], i, s, t, n, m;
    t = 2;
    m = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {    
        scanf("%d", &a[i]);
    }
    for (i = 1; i <= n ; i++)
    {
        while(1.*t<=sqrt(1.*a[i]))
        {
            if(a[i]%t==0)
            {
                s = a[i] / t;
                if(t!=s)
                {
                    m = m + s + t;
                }
                else
                {
                    m = m + t;
                }
                t++;
            }
            else
            {
                t++;
            }
        }
        if(m==a[i])
            printf("YES\n");
        else
            printf("NO\n");
        t = 2;
        m = 1;
    }
    return 0;
}