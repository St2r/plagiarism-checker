"""
2022-03-28 19:04:14
AC
1.0
Accepted | 1 * (5 / 100) | 12 ms | 1652 KB
Accepted | 1 * (35 / 100) | 3 ms | 1708 KB
Accepted | 1 * (60 / 100) | 21 ms | 1556 KB

"""

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=0,n=0,a[100]={0},yz=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }for(i=0;i<n;i++){
        for(j=1;j<a[i];j++){
            if(a[i]%j==0){
                yz=yz+j;
            }
        }if(yz==a[i]){
        printf("YES\n");
        }else{
        printf("NO\n");
        }yz=0;
    }
    return 0;
}