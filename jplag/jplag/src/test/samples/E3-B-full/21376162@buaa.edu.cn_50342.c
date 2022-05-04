"""
2022-03-26 12:43:39
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1660 KB
Accepted | 1 * (35 / 100) | 3 ms | 1712 KB
Accepted | 1 * (60 / 100) | 3 ms | 1660 KB


"""

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,a[1000],m,b,s;
    scanf("%d",&n);
    i=0;
    while(i<=n-1){
        scanf("%d",&a[i]),s=0;
        for(m=1;m<a[i];m++){
            if(a[i]%m==0){
               s=s+m;
            }
        }
        if(s==a[i]){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        i++;
    }
    return 0;
}