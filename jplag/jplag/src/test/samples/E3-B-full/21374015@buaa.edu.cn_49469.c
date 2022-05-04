"""
2022-03-26 10:14:26
AC
1.0
Accepted | 1 * (5 / 100) | 9 ms | 1628 KB
Accepted | 1 * (35 / 100) | 11 ms | 1628 KB
Accepted | 1 * (60 / 100) | 18 ms | 1648 KB

"""

#include<stdio.h>
int main(){
    int n,a,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        for(int j=1;j<a;j++){
            if(a%j==0) sum+=j;
        }
        if(sum==a) printf("YES\n");
        else printf("NO\n");
        sum=0;
    }
    return 0;
}