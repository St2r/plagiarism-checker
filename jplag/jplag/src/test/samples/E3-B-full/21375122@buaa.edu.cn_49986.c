"""
2022-03-27 17:11:49
AC
1.0
Accepted | 1 * (1 / 8) | 3 ms | 1524 KB
Accepted | 1 * (1 / 8) | 2 ms | 1688 KB
Accepted | 1 * (1 / 8) | 2 ms | 1624 KB
Accepted | 1 * (1 / 8) | 2 ms | 1628 KB
Accepted | 1 * (1 / 8) | 2 ms | 1556 KB
Accepted | 1 * (1 / 8) | 2 ms | 1516 KB
Accepted | 1 * (1 / 8) | 2 ms | 1544 KB
Accepted | 1 * (1 / 8) | 2 ms | 1592 KB

"""

#include<stdio.h>

int main()
{
    int n,a[105],i,j,k,t;
    scanf("%d",&n);
    t=0;
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(j=1;j<=n;j++){
        for(k=1;k<=a[j]/2;k++){
            if(a[j]%k==0)
                t=t+k;
        }
        if(a[j]==t)
            printf("YES\n");
        else
            printf("NO\n");
        t=0;
    }

    return 0;

}