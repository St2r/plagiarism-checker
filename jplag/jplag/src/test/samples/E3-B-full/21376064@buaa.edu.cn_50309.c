"""
2022-03-27 21:12:43
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1704 KB
Accepted | 1 * (35 / 100) | 2 ms | 1636 KB
Accepted | 1 * (60 / 100) | 2 ms | 1704 KB

"""

#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        int j,k=1;
       for(j=2;j*j<=a;j++)
       {
           if(a%j==0)
           {
               if(j*j!=a)
                k+=(j+a/j);
               else
                k+=j;
           }
       }

        if(k==a)

            printf("YES\n");

        else

            printf("NO\n");

    }

return 0;
}