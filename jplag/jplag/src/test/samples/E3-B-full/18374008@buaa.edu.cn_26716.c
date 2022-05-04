"""
2022-03-26 12:41:09
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1548 KB
Accepted | 1 * (35 / 100) | 2 ms | 1708 KB
Accepted | 1 * (60 / 100) | 4 ms | 1648 KB

"""

#include<stdio.h>
#include<stdlib.h>

// return true if the sum of all dividers (except the number itself) of a number is equal to the number
int is_perfect(int n) {
    int sum=0;
    for(int i=1;i<n;i++) {
        if( n%i==0 ) sum+=i;
    }
    return sum==n;
}


int main() {
    int n;
    int a;
    scanf("%d",&n);
    while(n--) {
        scanf("%d",&a);
        if(is_perfect(a)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}