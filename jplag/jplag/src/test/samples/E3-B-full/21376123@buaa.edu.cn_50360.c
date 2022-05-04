"""
2022-03-27 20:44:22
AC
1.0
Accepted | 1 * (5 / 100) | 14 ms | 1612 KB
Accepted | 1 * (35 / 100) | 2 ms | 1636 KB
Accepted | 1 * (60 / 100) | 10 ms | 1632 KB

"""

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x,sum;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d",&x);
        sum=0;
        for(int j = 1; j <= x/2; j++){
            if(x % j == 0){
                sum+=j;
            }
        } 
        printf((sum == x)?"YES\n":"NO\n");

    }
    return 0;
}