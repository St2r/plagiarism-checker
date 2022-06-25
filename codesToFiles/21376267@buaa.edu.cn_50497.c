"""
2022-03-26 12:59:35
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1648 KB
Accepted | 1 * (60 / 100) | 16 ms | 1704 KB

"""

#include <stdio.h>
#include <math.h>
#define eps 1e-16
int main()
{
    int n,i;
    double sum=1,r=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        r*=i;
        sum+=1.0/r;
        if(1.0 / r <eps)
            break;
    }
    printf("%.14f",sum);
return 0;
}