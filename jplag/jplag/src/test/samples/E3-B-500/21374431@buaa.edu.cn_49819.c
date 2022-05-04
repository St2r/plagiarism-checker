"""
2022-03-29 20:31:09
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 2 ms | 1656 KB
Accepted | 1 * (60 / 100) | 4 ms | 1548 KB

"""

#include <stdio.h>
int main(){
    int a[200],n;
    scanf("%d",&n);
    int i=0,j=0;
    for(i=0;i<n;i++){
        scanf ("%d",&a[i]);
        int sum=0;
        for(j=1;j<a[i];j++){
            
            if(a[i]%j==0)
            sum+=j;
        }
        if(sum==a[i])
        printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}