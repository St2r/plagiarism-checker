"""
2022-03-29 22:56:26
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1740 KB
Accepted | 1 * (1 / 10) | 0 ms | 1664 KB
Accepted | 1 * (2 / 10) | 1 ms | 1744 KB
Accepted | 1 * (2 / 10) | 1 ms | 1668 KB
Accepted | 1 * (4 / 10) | 0 ms | 1684 KB

"""

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    double a[1000],sum,k;
    scanf("%d",&n);
    if(n>=17){
        printf("2.71828182845905");
    }
    else{
    for(i=1,k=1;i<=n;i++){
            k=1;
        for(j=1;j<=i;j++){
            k=k*(double)j;
        }
        a[i]=k;
    }
    for(i=1,sum=1;i<=n;i++){
        sum=sum+(double)(1/a[i]);
    }
    printf("%.14f",sum);}
    return 0;
}