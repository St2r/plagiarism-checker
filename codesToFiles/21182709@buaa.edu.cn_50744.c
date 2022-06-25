"""
2022-03-27 19:47:24
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1472 KB
Accepted | 1 * (35 / 100) | 2 ms | 1696 KB
Accepted | 1 * (60 / 100) | 11 ms | 1628 KB
8 KB
Accepted | 1 * (2 / 10) | 9 ms | 1636 KB
Time Limit Exceed | 0 * (4 / 10) | 1000 ms | 884 KB

"""

#include <stdio.h>

void main()
{
    int a,i,j;

    double b,c;

    c=1;

    scanf ("%d",&a);

    for (i=1; i<=a;i++)
    {
        b=1;

        for(j=i;j>0;j--)
        {
            b=b*j;

        }
        b=1/b;
        c=c+b;

    }
    printf("%.14f",c);

    return 0;


}