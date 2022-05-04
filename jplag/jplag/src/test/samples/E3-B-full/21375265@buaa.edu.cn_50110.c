"""
2022-03-27 10:55:22
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1688 KB
Accepted | 1 * (35 / 100) | 2 ms | 1656 KB
Accepted | 1 * (60 / 100) | 3 ms | 1604 KB

"""

#include <stdio.h>

int main()
{
    int n=0,i=0;
    scanf("%d",&n);
    int a[1001],m,p=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        p=0;
        for(m=1;m<a[i];m++){
            if(a[i]%m==0)p=p+m;
        }
        if(p==a[i])printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}