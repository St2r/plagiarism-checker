"""
2022-03-26 13:44:59
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1668 KB
Accepted | 1 * (35 / 100) | 2 ms | 1660 KB
Accepted | 1 * (60 / 100) | 4 ms | 1640 KB

"""

#include<stdio.h>
int a[100];
int main(){
    int n;
    int num;
    int j=1;
    int sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        sum=0;
        scanf("%d",&num);
        for(j=1;j<num;j++){
            if (num%j==0){
                sum =sum+j;
            } 
        }
        if (sum ==num){
            printf("YES\n");
            }
        else{
            printf("NO\n");
            }
    }
    return 0;
}