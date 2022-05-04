"""
2022-03-27 18:18:02
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1628 KB
Accepted | 1 * (35 / 100) | 2 ms | 1596 KB
Accepted | 1 * (60 / 100) | 4 ms | 1548 KB

"""

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum,i,j,k;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        scanf("%d",&k);
        sum=0;
        for (j=1;j<k;j++){
           if ((k%j)==0)
            sum+=j;}
            if (sum==k)
                printf("YES\n");
                else printf("NO\n");


        }


    return 0;
}