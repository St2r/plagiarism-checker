"""
2022-03-29 23:25:11
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1688 KB
Accepted | 1 * (35 / 100) | 0 ms | 1684 KB
Accepted | 1 * (60 / 100) | 2 ms | 1684 KB

"""

#include "stdio.h"
#include "stdlib.h"
int main()

{
    int  a[101] , x[10005], n ;

    scanf("%d", &n);

   for(int i=0;i<n;i++){

        scanf("%d", &a[i]);

        }

   for(int i=0 ;i<n;i++){

        x[i]=0;

        for(int m=1 ; m<a[i] ; m++)
            {

            if( a[i] % m == 0 )
            {

             x[i]=x[i]+m;

             }
            }

        if(x[i]==a[i])
            {

            printf("YES");

            }

        else{

            printf("NO");

            }
            if(i<n-1)
                printf("\n");

        }

   return 0;

}