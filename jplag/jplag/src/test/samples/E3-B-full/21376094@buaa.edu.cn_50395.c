"""
2022-03-27 15:35:22
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 2 ms | 1704 KB
Accepted | 1 * (60 / 100) | 4 ms | 1544 KB

"""

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[110];
    int n,x,sum = 0;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++){
        scanf("%d",&x);
        a[i] = x;
    }
    for (int j = 1; j <= n;j++ ){
            sum = 0;
        for (int k = 1; k < a[j]; k++){

          if(a[j] % k == 0) {

            sum = sum + k;
          }
        }
          if (sum == a[j]){
            printf("YES\n");
          }
          else printf("NO\n");

    }
    return 0;
}