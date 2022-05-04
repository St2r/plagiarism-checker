"""
2022-03-28 22:36:58
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1656 KB
Accepted | 1 * (35 / 100) | 1 ms | 1660 KB
Accepted | 1 * (60 / 100) | 3 ms | 1740 KB

"""

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0;
    int a[105];
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d\n",&a[i]);
    }
    for(int j=1;j<=n;j++){
            sum = 0;
        for(int k = 1;k<a[j];k++){
            if(a[j]%k == 0){
                sum = sum + k;
            }
        }
        if(sum == a[j]){
            printf("YES\n");
        }
        else printf("NO\n");
    }

    return 0;
}