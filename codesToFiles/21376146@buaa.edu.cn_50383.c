"""
2022-03-26 21:50:56
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1628 KB
Accepted | 1 * (1 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1656 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (4 / 10) | 2 ms | 1548 KB

"""

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1,j=1;
    unsigned long long jie;
    double s=1;
    scanf("%d",&n);
    if(n<=16)
    {
        while(i<=n)
        {
            jie=1;
            j=1;
            while(j<=i)
            {
                jie=jie*j;
                j++;
            }
            s=s+1/(1.0*jie);
            i++;
        }
        printf("%.14lf",s);
    }
    else
        printf("2.71828182845905");



    return 0;
}