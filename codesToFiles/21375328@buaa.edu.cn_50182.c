"""
2022-03-29 09:45:34
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (1 / 10) | 1 ms | 1644 KB
Accepted | 1 * (2 / 10) | 1 ms | 1692 KB
Accepted | 1 * (2 / 10) | 0 ms | 1644 KB
Accepted | 1 * (4 / 10) | 1 ms | 1744 KB

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
    double sum = 1;
    int i, n;
    unsigned long long a[19];
    a[1] = 1;
    
    
    for(i = 2; i<= 18; i++){
        a[i] = i * a[i - 1];
    }
    
    
    scanf("%d", &n);
    if( n > 18){
        n = 18;
    }
    
    for( i = 1; i <= n; i++){
        sum += 1.0/a[i];
    }
    printf("%.14lf", sum);
    return 0;
}