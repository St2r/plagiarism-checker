"""
2022-03-26 12:48:14
AC
1.0
Accepted | 1 * (5 / 100) | 11 ms | 1652 KB
Accepted | 1 * (35 / 100) | 9 ms | 1704 KB
Accepted | 1 * (60 / 100) | 11 ms | 1600 KB

"""

#include<stdio.h>
int main(){
    int sum=1;
    int number;
    int n;
    scanf("%d", &n);
    int i=0;
    while (i<n) {
        i++;
        scanf("%d", &number);
        if (number==1) {
            printf("NO\n");
            continue;
        }
        for (int i=2; i*i<=number; i++) {
            if (number%i==0) {
                sum+=i;
                if(i*i!=number){
                    sum+=(number/i);
                }
            }
        }
        if (sum==number) {
            printf("YES\n");
        }else printf("NO\n");
        sum=1;
    }
}