"""
2022-03-26 12:49:55
AC
1.0
Accepted | 1 * (5 / 100) | 11 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1652 KB
Accepted | 1 * (60 / 100) | 13 ms | 1712 KB

"""

#include<stdio.h>
int main(){
    int n, i;
    scanf("%d", &n);
    int x;
    int sum;
    while(n--){
        scanf("%d", &x);
        sum=0;
        for(i=1;i<x;i++){
            if(x%i==0){
                sum=sum+i;}}
        if(sum==x)
            printf("YES\n");
        else
            printf("NO\n");}
    return 0;}