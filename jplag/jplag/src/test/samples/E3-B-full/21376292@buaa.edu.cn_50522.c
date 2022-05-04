"""
2022-03-29 22:06:09
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1664 KB
Accepted | 1 * (35 / 100) | 1 ms | 1736 KB
Accepted | 1 * (60 / 100) | 2 ms | 1628 KB

"""

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,sum,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0,sum=0;i<n;i++){
        for(j=1;j<a[i];j++){
        if((a[i]%j)==0){
            sum=sum+j;
        }}
        if(a[i]==sum){
            printf("YES\n");
            }
        else{
            printf("NO\n");
        }
        sum=0;
}
return 0;
}