"""
2022-03-27 20:15:00
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1616 KB
Accepted | 1 * (35 / 100) | 2 ms | 1484 KB
Accepted | 1 * (60 / 100) | 17 ms | 1488 KB

"""

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x;
    int yue[10002];
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d",&x);
        int m = 0;
        for(int j = 1; j <= x/2; j++){
            if(x % j == 0){
                yue[m] = j; m++;
            }
        }
        int sum = 0;
        for(int k = 0; k < m; k++)
        {
        	sum += yue[k];
		}
            
        printf((sum == x)?"YES\n":"NO\n");

    }

    return 0;
}