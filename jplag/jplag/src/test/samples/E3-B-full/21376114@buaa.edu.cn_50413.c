"""
2022-03-26 10:22:28
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1544 KB
Accepted | 1 * (35 / 100) | 11 ms | 1704 KB
Accepted | 1 * (60 / 100) | 4 ms | 1628 KB

"""

#include "time.h"
#include "time.h"
#include "stdlib.h"
#include <stdio.h>
#include "math.h"
int main(){
    
        int n = 0, a = 0, b2 = 1, x2 = 0, b, x;
        scanf("%d",&n);
        for (int i=1; i<=n; i++) {
            scanf("%d",&a);
            b=b2, x=x2;
            while (b<=a) {
                if (a%b==0) {
                    x += b;
                    
                }
                    b++;
                
            }
                if (x==2*a) {
                    printf("Yes\n");
                }
                else printf("No\n");
            
        }
        
        
        return 0;
    }