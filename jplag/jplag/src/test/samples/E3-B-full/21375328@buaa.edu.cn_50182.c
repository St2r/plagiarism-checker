"""
2022-03-26 08:07:54
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1608 KB
Accepted | 1 * (35 / 100) | 2 ms | 1656 KB
Accepted | 1 * (60 / 100) | 3 ms | 1588 KB

"""

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

#define MAX( x, y ) ( ((x) > (y)) ? (x) : (y) )
#define MIN( x, y ) ( ((x) < (y)) ? (x) : (y) )
#define UPCASE( c ) ( ((c) >= 'a' && (c) <= 'z') ? ((c) - 0x20) : (c) )
#define DOWNCASE( c ) ( ((c) >= 'A' && (c) <= 'Z') ? ((c) + 0x20) : (c) )

int main()
{
    int n;
    scanf("%d", &n);
    int a;
    int i, j;
    for(i = 0; i < n; i++){
        scanf("%d", &a);
        int sum = 0;
        for ( j = 1; j < a; j++){
            if(a % j == 0){
                sum+=j;
            }
        }
        if( sum == a){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}