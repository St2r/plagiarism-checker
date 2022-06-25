"""
2022-03-26 23:53:11
AC
1.0
Accepted | 1 * (1 / 10) | 6 ms | 1668 KB
Accepted | 1 * (1 / 10) | 2 ms | 1696 KB
Accepted | 1 * (2 / 10) | 2 ms | 1644 KB
Accepted | 1 * (2 / 10) | 2 ms | 1668 KB
Accepted | 1 * (4 / 10) | 2 ms | 1616 KB

"""

#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    double ans=1,a=1,b,i;
    b=pow(10,-14);
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a*=i;
        ans+=1.0/a;
        if(((1.0)/a)<b)
        break;
    }
    printf("%.14f",ans);
    return 0;
}