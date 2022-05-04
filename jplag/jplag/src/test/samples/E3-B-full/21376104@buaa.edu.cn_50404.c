"""
2022-03-27 19:47:53
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1480 KB
Accepted | 1 * (35 / 100) | 18 ms | 1480 KB
Accepted | 1 * (60 / 100) | 16 ms | 1608 KB

"""

#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n, x, sum;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&x);
        sum = 0;
        for(int j = 1; j < x; j++){
            if(x % j == 0) sum += j;
        }
        if(sum == x) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}