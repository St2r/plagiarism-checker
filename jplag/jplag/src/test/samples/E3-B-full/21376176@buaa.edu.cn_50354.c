"""
2022-03-26 14:33:26
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1648 KB
Accepted | 1 * (35 / 100) | 2 ms | 1596 KB
Accepted | 1 * (60 / 100) | 4 ms | 1548 KB

"""

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

#define eps 1e-10

int main()
{
    int n,a,i,re=0;
    scanf("%d",&n);
    while((scanf("%d",&a))!=EOF)
    {

        for(i=1; i<a; i++)
        {
            if(a%i==0)
            {
                re+=i;

            }

        }
        if(re==a)
            printf("YES\n");
        else
            printf("NO\n");

    re=0;
    }

    return 0;
}