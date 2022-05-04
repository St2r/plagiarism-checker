"""
2022-03-28 18:45:58
AC
1.0
Accepted | 1 * (5 / 100) | 12 ms | 1636 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 13 ms | 1696 KB

"""

#include<stdio.h>
#include<math.h>
int main()
{
    int n ;
    scanf("%d",&n);
    while ( n --)
    {
        int a ;
         int r = 0;
        scanf ("%d",&a);
        for ( int  i = 1 ; i < a ; i++)
        {

            if ( a % i == 0)
            {
                r = r + i;
            }

        }
         if ( r == a )
                printf("YES\n");
         else
                printf("NO\n");

    }
    return 0;
}