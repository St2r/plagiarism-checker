"""
2022-03-28 20:06:19
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1592 KB
Accepted | 1 * (35 / 100) | 0 ms | 1664 KB
Accepted | 1 * (60 / 100) | 3 ms | 1696 KB

"""

#include <stdio.h>

int main(){
    int n,a[1000],sum[1000]={0};
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);}
        for(int i=1;i<=n;i++){
        for(int j=1;j<a[i];j++){
            if(a[i]%j==0)
            {
                sum[i]+=j;
            }}}
            for(int i=1;i<=n;i++){
            if(sum[i]==a[i]){
            printf("YES\n");}
            else{printf("NO\n");}
    }
    return 0;
}