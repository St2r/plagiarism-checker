"""
2022-03-29 22:40:58
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1688 KB
Accepted | 1 * (35 / 100) | 1 ms | 1732 KB
Accepted | 1 * (60 / 100) | 2 ms | 1580 KB

"""

#include <stdio.h>

int main() {
    int n,x,i,j=0;
    scanf("%d",&n);
    while(n--) {
        scanf("%d",&x);
      
        for(i=1;i<x/2+1; i++) {
            if(x%i==0) {
                j+=i;
            }
        }
        if(j==x) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
            j=0;
        }
    }


    return 0;
}