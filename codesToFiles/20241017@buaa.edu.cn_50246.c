"""
2022-03-26 09:01:33
AC
1.0
Accepted | 1 * (1 / 4) | 6 ms | 1664 KB
Accepted | 1 * (1 / 4) | 11 ms | 1608 KB
Accepted | 1 * (1 / 4) | 7 ms | 1656 KB
Accepted | 1 * (1 / 4) | 9 ms | 1652 KB

"""

#include<stdio.h>
int main(){
    int n,i,j=1;
    double sum=1;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        if(i<=17){
            j=j*i;
            sum=sum+(1.0/j);}
        else{
            break;
        }}
    printf("%.14f", sum);
    return 0;}